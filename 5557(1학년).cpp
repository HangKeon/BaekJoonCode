#include <iostream>
using namespace std;

int main()
{
	int n;									//�Է��� ������ ����
	int arr[101] = { 0, };					//�Է��� ���ڸ� �����ϴ� �迭
	long long dp[101][21] = { 0, };			//dp[n�� ��][0~20] -> dp[i][j] = i��° ������ ������� �� j�� ���� �� �ִ� ����� ��
	int a, b;

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp[1][arr[1]] = 1;						//���ʷ� �Է��� ���� dp�� ����

	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			if (dp[i][j] > 0)
			{
				a = j + arr[i + 1];
				b = j - arr[i + 1];

				if (a >= 0 && a <= 20)
					dp[i + 1][a] += dp[i][j];

				if (b >= 0 && b <= 20)
					dp[i + 1][b] += dp[i][j];
			}
		}
	}

			cout << dp[n - 1][arr[n]] << endl;





	return 0;
}