#include <iostream>
#include <cstring>
using namespace std;

int dp[31][31];						//dp[n][m] : n���� ����Ʈ���� m���� ����Ʈ�� �մ� �ٸ��� ����
									//ex) dp[2][4] = dp[1][1] + dp[1][2] + dp[1][3]

int main()
{
	int t;							//�׽�Ʈ ���̽� ��
	int n, m;						//����(n)�� ����(m)�� �ִ� ����Ʈ�� ���� 

	cin >> t;

	for (int i = 1; i < 31; i++)	//n=1�� ���� m�� ������ŭ �ٸ��� ���� �� ����
		dp[1][i] = i;

	for (int i = 2; i < 31; i++)
		for (int j = i; j < 31; j++)
			for (int k = j - 1; k >= i - 1; k--)
				dp[i][j] += dp[i - 1][k];

	while (t--)
	{
		cin >> n >> m;

		cout << dp[n][m] << endl;
	}



	return 0;
}