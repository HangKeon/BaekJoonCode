#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[5];					//�Է��ϴ� ���ڿ�

	for (int i = 0; i < 5; i++)
		cin >> s[i];
	
	for (int i = 0; i < 15; i++)
		for (int j = 0; j < 5; j++)
			if (i < s[j].length())		//s[i]�� ���� �������� ���
				cout << s[j][i];

	return 0;
}