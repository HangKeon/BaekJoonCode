#include <iostream>
using namespace std;

//char s[5][16];				//���⿡ �����ϸ� �ƹ� ������ ����

int main()
{
	char s[5][16] = {' ',};		//���⿡ �����ϸ� ���� �� �������� ����� �ֱ�!

	for (int i = 0; i < 5; i++)
		cin >> s[i];

	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++)
			if (s[j][i] == NULL)
				continue;
			else
				cout << s[j][i];

	return 0;
}