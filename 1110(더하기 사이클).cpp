#include <iostream>
using namespace std;

//1110�� ����
int main()
{
	int N, a = 0, b = 0, c = 0, d = 0, stack = 0;		//N=�Է��� ����, stack = ����Ŭ Ƚ��

	cout << "���ڸ� �Է����ּ��� : ";
	cin >> N;

	d = N;												//d�� N�� ����

	while (1)
	{
		if (d >= 0 && d<100)							//0��N<100�̸�
		{
			if (d<10)									//N<10�̸�
			{
				d *= 10;
			}

			a = d % 10;									//a�� N�� ���� �ڸ��� ���� ��	
			b = d / 10;									//b�� N�� ���� �ڸ��� ���� ��
			c = (a + b) % 10;							//c�� a�� b�� ���� ���� �ڸ� ��
			d = a * 10 + c;								//d = 10 * a + b�� ��

			if (N != d)									//N�� c�� �ٸ��ٸ�
			{
				stack++;								//stack�� 1�� ���ض�
			}
			else
			{
				stack++;								//stack�� 1�� ���ض�
				cout << stack << endl;
				return 0;
			}
		}
		else											//0��N<100�� �ƴ϶��
		{
			cout << "�ٽ� �Է��ϼ���!" << endl;
			cout << "���ڸ� �Է����ּ��� : ";
			cin >> N;

			d = N;										//d�� N�� ����
		}

		if (stack>100)									//����Ŭ Ƚ���� 100�� �Ѿ�� ���
		{												//���̻� ���� �� ���ٰ� �Ǵ��Ѵ�.
			cout << "���� ������ �ʽ��ϴ�." << endl;
			return 0;
		}
	}

	return 0;
}
//��