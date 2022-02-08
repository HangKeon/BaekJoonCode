#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;							//�ﰢ���� ũ�⸦ �Է��� ��
	int dp[501][501] = { 0, };		//dp[�ﰢ�� ��][�� ��]
	int max_value = 0;				//dp�� �ִ��� ����
	cin >> n;

	for (int i = 1; i <= n; i++)		//dp�� �Է�
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> dp[i][j]; 

			if (j == 1)
				dp[i][j] = dp[i - 1][j] + dp[i][j];
			else if (i == j)
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
			else
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + dp[i][j];

			if (max_value < dp[i][j])
				max_value = dp[i][j];
		}
	}

	cout << max_value << endl;


	return 0;
}