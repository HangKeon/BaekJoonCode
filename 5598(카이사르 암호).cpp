#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;							//�Է��� ���ڿ�

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] - 3 < 65)				//s[i]�� �������� 3ĭ �Ű��� �� A(63)���� ���� ���
			s[i] = s[i] + 23;
		else
			s[i] -= 3;					//�������� �������� 3ĭ �̵�
	}

	cout << s << endl;

	return 0;
}