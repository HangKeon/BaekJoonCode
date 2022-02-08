#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][100001];		//dp[i][j] : i������ j�� ������ ������ ���� ���� �� �ִ� �ִ� �ݾ�

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;				//n : ������ ������ ������ ����, k : ������ ���� �� �ִ� �ð�
	int a, b, c, d;			//a : ���� �ð�, b : ���� ��ݾ�, c : ������ �ð�, d : ������ ��ݾ�
	int ans = 0;			//�ð� ���� �ִ� ��ݾ�

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c >> d;

		if (i == 0)							//���� ó�� �ݾ��� �̿��� dp���� ����
		{
			dp[i][a] = b;					//���� �ð��� a�� �� �ɸ��� ���� ��ݾ�
			dp[i][c] = max(dp[i][c], d);	//a == c�� ����� max�� ���! ���ô� ������ d�̴�!
		}
		else								//ù ��° ���� ����
		{
			for (int j = 0; j <= k; j++)	//�ð��ʰ��� �ƴ�!(100 * 100,000 = 10,000,000��), 1�� = 1���
			{
				if (!dp[i - 1][j])			
					continue;

				if (j + a <= k)				//i�������� �ɸ��� ���� �ð�
					dp[i][j + a] = max(dp[i][j + a], dp[i - 1][j] + b);

				if (j + c <= k)				//i�������� �ɸ��� ������ �ð�
					dp[i][j + c] = max(dp[i][j + c], dp[i - 1][j] + d);
			}
		}
	}

	for (int i = 0; i <= k; i++)
		ans = max(ans, dp[n - 1][i]);

	cout << ans << endl;

	return 0;
}