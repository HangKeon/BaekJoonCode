#include <iostream>
using namespace std;

int main()
{
	int R, C, A, B;					//R = ��, C = ��, A = ���� ������ ������ ����, B = ���� �ʺ��� ������ ����

	cin >> R >> C;
	cin >> A >> B;

	for (int i = 0; i < R*A; i++)
	{
		for (int j = 0; j < C*B; j++)
		{
			if ((i / A + j / B) % 2 == 0)
				cout << "X";
			else
				cout << ".";
		}
		cout << endl;
	}

	return 0;
}