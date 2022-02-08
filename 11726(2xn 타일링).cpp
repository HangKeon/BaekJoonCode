#include <iostream>
using namespace std;

int dp[1001];								//�������� �ִ� 1000���� �Է� �����ϴٰ� �߱⿡ �̷��� ����!

int tile(int n)
{
	if (n == 1)								//n�� 1�� ���
		return 1;							//1�� ��ȯ
	if (n == 2)								//n�� 2�� ���
		return 2;							//2�� ��ȯ
	if (dp[n] != 0)							//dp�� ���� �ִ� ���
		return dp[n];						//dp�� ���� ��ȯ

	return dp[n] = (tile(n - 1) + tile(n - 2)) % 10007;	//�� �̿ܿ� ��� dp�� ���ο� ���� ������ ��ȯ -> �������� 1,007�� �������� ���϶�� ��.
}

int main()
{
	int n;									//Ÿ���� ������ ����

	cin >> n;

	cout << tile(n) << endl;
	
	return 0;
}