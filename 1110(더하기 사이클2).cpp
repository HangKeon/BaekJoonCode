#include <iostream>
using namespace std;

int main()
{
	int n;								//����Ŭ�� ����
	int cnt = 0;						//����Ŭ Ƚ��
	int a, b;
	int result; 

	cin >> n;

	result = n;							//result�� n�� ������ ����!

	while (1)
	{
		if (n < 10)						//n<10�� ��� 0�� �ٿ� �� �ڸ����� �����.
			n *= 10;

		a = n % 10;						//1�� �ڸ��� ����
		b = n / 10 + a;					//10�� �ڸ� + 1�� �ڸ�

		if (b > 10)
			b %= 10;

		n = 10 * a + b;					//a�� 10�� �ڸ���, b�� 1�� �ڸ��� �� ���� ����!

		if (n < 10)						//n<10�� ��� 0�� �ٿ� �� �ڸ����� �����.
			n *= 10;	

		cnt++;							//����Ŭ ���� ���� ����

		if (n == result)
			break;

	}

	cout << cnt << endl;


	return 0;
}