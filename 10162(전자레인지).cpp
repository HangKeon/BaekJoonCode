#include <iostream>
using namespace std;

int main()
{
	int t;						//�丮�ð�
	int a, b, c;				//5��, 1��, 10�� ��ư�� ���� Ƚ��

	cin >> t;

	if (t % 10 != 0)			//a,b,c�� 10�� ���! ���� ������������ ������
		cout << -1 << endl;
	else						//t�� 10�� ����� ���
	{
		a = t / 300;
		t %= 300;

		b = t / 60;
		t %= 60;

		c = t / 10;
		c %= 10;

		cout << a << ' ' << b << ' ' << c << endl;
	}

	return 0;
}