#include <iostream>
using namespace std;

int main()
{
	int a, b, c;					//a : �Է°�, b : a���� ����� �� �ִ� 5�� �ִ� ����, c : 5�� ����ϰ� ���� a�� ����
	int min = 9999;					//�ּҰ� ����
	int cnt = 0;					//���� ������ ����

	cin >> a;

	b = a / 5;

	for (int i = 0; i <= b; i++)
	{
		c = a - 5 * i;
		cnt = 0;

		if (c % 3 == 0)
		{
			cnt += c / 3;
			cnt += i;

			if (min > cnt)
				min = cnt;
		}
	}

	if (min == 9999)
		min = -1;

	cout << min << endl;



	return 0;
}