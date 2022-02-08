#include <iostream>
using namespace std;

int main()
{
	int n, m, k;						//n:��, m:��, k: o�� ǥ�õ� ĭ�� ��ȣ
	int dp[16][16] = { 0, };			//dp[i][j]�� �����ϱ� ���� ����� ���� ����
	int midx, midy;						//k�� ��ġ�� ã�� ����
	int cnt = 0;						//k�� �������� ��ġ�� ã��
	int value;							//dp[midx][midy]�� ������ ���� -> �ֳ��ϸ� ���� ���� ���� �� dp[midx][midy]�� 1�� �ʱ�ȭ�ؾ� �ϱ� ����.


	cin >> n >> m >> k;

	dp[1][1] = 1;

	if (k != 0)							//o�� ǥ�õ� ĭ�� �ִ� ���
	{
		
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cnt++;

				if (cnt == k)			//k�� x,y�� ���� ����
				{
					midx = i;			
					midy = j;
				}
			}
		}

		for (int i = 1; i <= midx; i++)		//dp[1][1]���� k�� ��ġ dp[midx][midy]������ ����� ���� ã�´�.
		{
			for (int j = 1; j <= midy; j++)
			{
				if (i == 1 && j == 1)		//�̹� ���� 1�� �ʱ�ȭ �����Ƿ� �ǳʶپ�� �Ѵ�.
					continue;

				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}

		value = dp[midx][midy];

		dp[midx][midy] = 1;					//k�� ��ġ�� ���� 1�� �ʱ�ȭ

		for (int i = midx; i <= n; i++)
		{
			for (int j = midy; j <= m; j++)
			{
				if (i == midx && j == midy)		//�̹� ���� 1�� �ʱ�ȭ �����Ƿ� �ǳʶپ�� �Ѵ�.
					continue;

				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}

		value *= dp[n][m];

		cout << value << endl;
	}
	else								//o�� ǥ�õ� ĭ�� ���� ���
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (i == 1 && j == 1)	//dp[1][1]=1�� �ʱ�ȭ �����Ƿ� �� �ʿ䰡 ����
					continue;

				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}

		cout << dp[n][m] << endl;
	}

	return 0;
}



