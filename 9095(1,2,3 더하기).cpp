#include <iostream>
using namespace std;

int main()
{
	int n, t, c;					//n = 1,2,3�� �������� ���� ��, t = �׽�Ʈ ���̽��� ����, c = t�� �����ϱ� ���� ��
	int dp[11] = { 0, };			//n�� 1,2,3���� ���� �� �ִ� �������� ��Ÿ�� �迭
	int dk[11] = { 0, };

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	cin >> t;
	c = t;

	while(t--)
	{
		for (int i = 4; i < 11; i++)	//4~10������ dp�迭�� ������ ���ϴ� ��
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

		cin >> n;

		dk[t+1] = dp[n];
	}
	for (int i = c; i > 0; i--)
		cout << dk[i] << endl;

	return 0;
}