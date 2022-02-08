#include <iostream>
using namespace std;

int main()
{
	int n, k;									//n = ���� ������ ����, k = ������� ����� ���� �׼�
	int a[101] = { 0, };						//������ ���� ������� �迭
	int dp[101][10001] = { 0, };				//dp[i][j] = i��° �������� ����� j���� ����� ���

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	for (int i = 1; i <= n; i++)				//i��° �������� �̿��� 0���� ����� ����
		dp[i][0] = 1;							//������ �� �����̴�.

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (j >= a[i])
				dp[i][j] = dp[i - 1][j] + dp[i][j - a[i]];
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	cout << dp[n][k] << endl;
	



	return 0;
}