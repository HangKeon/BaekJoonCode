#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501];					//dp[a][b] : a ~ b���� �������� �ּ���
									//dp[a][a] = sum[a] - sum[a-1] = arr[a]
									//dp[a][a+1] = sum[a+1] - sum[a-1] = arr[a] + arr[a+1]

int main()
{
	int t;							//�׽�Ʈ ���̽� ��
	int k;							//�Ҽ��� ���� ���� ��
	int arr[501];					//������ ũ��
	int sum[501] = { 0, };			//sum[a] : 0 ~ a������ �������� ���� ��

	cin >> t;

	while (t--)
	{
		cin >> k;

		for (int i = 1; i <= k; i++)
		{
			cin >> arr[i];

			sum[i] = sum[i - 1] + arr[i];
		}
		
		for (int i = 1; i < k; i++)
		{
			for (int x = 1; x + i <= k; x++)
			{
				int y = x + i;

				dp[x][y] = 2e9;

				for (int j = x; j < y; j++)
					dp[x][y] = min(dp[x][y], dp[x][j] + dp[j + 1][y] + sum[y] - sum[x - 1]);
			}
		}

		cout << dp[1][k] << endl;

	}

	return 0;
}