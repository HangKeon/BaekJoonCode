#include <iostream>
using namespace std;

int Fibonacci(int n);								//�Ǻ���ġ ���� ���ϴ� �Լ�
int GCD(int a, int b);								//�ִ������� ���ϴ� �Լ�

int main()
{
	int n = 0, m = 0;								//n,m�� ° �Ǻ���ġ ������ ����ϱ� ���� �Է�!
	int result = 0;									//�����
	int a = 0, b = 0;

	cout << "n �Է� : ";
	cin >> n;
	cout << "m �Է� : ";
	cin >> m;

	a = Fibonacci(n);
	b = Fibonacci(m);

	result = GCD(a, b);

	cout << result << endl;

	return 0;
}

int Fibonacci(int n)								//�Ǻ���ġ ���� ����Լ��� ����.
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int GCD(int a, int b)								//�ִ������� ��Ŭ���� ȣ�������� ����.
{
	int temp = 0;

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

//����