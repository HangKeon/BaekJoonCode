#include <iostream>
using namespace std;

int gcd(int a, int b)					//�ִ�����
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main()
{
	int n, m;							//n = �ҽ��� ��, m = ��а� ��
	int cnt = 0;						//�ʿ��� Į���� ��

	cin >> n >> m;

	cnt = m - gcd(n, m);
	cout << cnt << endl;


	return 0;
}