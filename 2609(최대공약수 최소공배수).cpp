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

int lcm(int a, int b)					//�ּҰ����
{
	return a * b / gcd(a, b);
}

int main()
{
	int a, b;							//�Է°�

	cin >> a >> b;

	cout << gcd(a,b) << endl << lcm(a,b) << endl;


	return 0;
}