#include <iostream>
using namespace std;

//int dp[1000001];
long long dp[2][1000001];				//dp[0][] : �⺻�� ����
										//dp[1][] :	n>=3���ʹ� ������ 2������ �����ϴ� ���� ����
long long tile(int x)
{
	//if (x == 0)					//n=0�� ���� 1����
	//	return 1;
	//else if (x == 1)			//n=1�� ��� 2����
	//	return 2;
	//else if (x == 2)			//n=2�� ��� 7����
	//	return 7;
	//else if (dp[x] != 0)		//�� ���̶� ���� ���
	//	return dp[x];

	//long long ans = 2 * tile(x - 1) + 3 * tile(x - 2);	//�⺻��

	//for (int i = 3; i <= x; i++)	//n>=3���ʹ� ������ 2������ ����
	//	ans += 2 * tile(x - i) % 1000000007;

	//return dp[x] = ans % 1000000007;

	dp[0][0] = 0;
	dp[0][1] = 2;
	dp[0][2] = 7;
	dp[1][2] = 1;
	
	for (int i = 3; i <= x; i++)
	{
		dp[1][i]=(dp[1][i-1]+dp[0][i-3]) % 1000000007;
		dp[0][i]=(2*dp[0][i-1]+3*dp[0][i-2]+2*dp[1][i]) % 1000000007;
	}

	return dp[0][x];

}

int main()
{
	int n;						//������ ����

	cin >> n;

	cout << tile(n) << endl;

	return 0;
}