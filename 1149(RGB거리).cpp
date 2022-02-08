#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][3];					//dp[a][b] : 1~a�� ���� RGB �� ���� ������ ĥ�ϴ� ����� �ּ���

int main()
{
	int n;							//���� ��
	int arr[1001][3];				//RGB�� ĥ�ϴ� ���

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];

	for (int i = 0; i < 3; i++)		//1�� ���� RGB ���� ����� ���� 
		dp[0][i] = arr[0][i];

	for (int i = 1; i < n; i++)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];		//i��° ���� R�� ĥ�ϴ� �ּ� ��� 
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];		//i��° ���� G�� ĥ�ϴ� �ּ� ���
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];		//i��° ���� B�� ĥ�ϴ� �ּ� ���
	}

	cout << min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]) << endl;

	return 0;
}