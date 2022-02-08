#include <iostream>
using namespace std;

int dp[1001];					//�̹� �� �� ���� ���� ���̻� ������� �ʰ� �迭�� ����

int tile(int x)
{
	if (x == 1)					//n=1�� ��� ����� 1����
		return 1;
	else if (x == 2)			//n=2�� ��� ����� 3����
		return 3;
	else if (dp[x] != 0)		//n>=3�� ��� dp[x]�� 0�� �ƴϸ� �״�� ���(�޸������̼�)
		return dp[x];

	return dp[x] = (tile(x - 1) + 2 * tile(x - 2)) % 10007;	//�޸������̼� -> �ߺ� ����
}

int main()
{
	int n;						//������ ����

	cin >> n;

	cout << tile(n) << endl;

	return 0;
}