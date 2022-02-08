#include <iostream>
using namespace std;

int dp[31];//�̹� �� �� ���� ���� ���̻� ������� �ʰ� �迭�� ����

int tile(int x)
{
	if (x == 0)					//n=0�� ��� ����� 1����
		return 1;
	else if (x == 1)			//n=1�� ��� ����� 0����
		return 0;
	else if (x == 2)			//n=2�� ��� ����� 3����
		return 3;
	else if (dp[x] != 0)		//�� ���̶� dp���� �������� �ִٸ� �״�� ���
		return dp[x];

	int ans = 3 * tile(x - 2);	//�⺻��

	for (int i = 3; i <= x; i++)	//x�� ¦���� ������ 2���� ����
		if (i % 2 == 0)
			ans += 2 * tile(x - i);

	return dp[x] = ans;
}

int main()
{
	int n;						//������ ũ��

	cin >> n;

	cout << tile(n) << endl;

	return 0;
}