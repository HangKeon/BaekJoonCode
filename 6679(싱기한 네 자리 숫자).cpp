#include <iostream>
using namespace std;

int main()
{
	int dec, twv, hex;						//10����, 12����, 16������ ������ ����

	for (int i = 1000; i <= 9999; i++)
	{
		dec = 0, twv = 0, hex = 0;

		for (int j = i; j > 0; j /= 10)			//10���� �ڸ� �� ��
			dec += j % 10;

		for (int j = i; j > 0; j /= 12)			//12���� �ڸ� �� ��
			twv += j % 12;

		for (int j = i; j > 0; j /= 16)			//16���� �ڸ� �� ��
			hex += j % 16;

		if (dec == twv && dec == hex)
			cout << i << endl;
	}

	return 0;
}