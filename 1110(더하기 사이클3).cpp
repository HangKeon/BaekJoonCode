#include <iostream>
using namespace std;

int main()
{
	int n;							//�Է°�
	int cnt = 0;					//����Ŭ ����
	int a, b;						//a : 10�� �ڸ�, b: 1�� �ڸ�
	int sum;						//a+b�� ������ ����
	int input;						//n�� ������ ����
	
	cin >> n;

	input = n;

	while (1)
	{
		a = n / 10;
		b = n % 10;

		sum = (a + b) % 10;			//���� a+b�� ���ڸ��� ��� ���� �ڸ��� �ʿ�!

		n = b * 10 + sum;

		cnt++;

		if (n == input)
			break;
	}

	cout << cnt << endl;

	return 0;
}