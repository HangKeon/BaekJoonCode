#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][100001];		//dp[����][����] : ������ �� ��ġ�� �ִ�

int main()
{
	int n, k;					//n : ��ǰ�� ��, k : ��ƿ �� �ִ� ����
	int w[101], v[101];			//w : ������ ����, v : ������ ��ġ
	
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= k; j++)		//j : �賶 ����
			if (j < w[i])					//���԰� �ʰ��� �ش� ������ ������ ���� �ʴ� ���
				dp[i][j] = dp[i - 1][j];
			else							//�ش� ������ ������ ��� ���([�賶 ���� - �ش� ���� ���� ����]+�ش� ���� ���� ��ġ)
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
	}

	cout << dp[n][k] << endl;



	return 0;
}