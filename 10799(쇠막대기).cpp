#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string s;						//�Է��ϴ� ���ڿ�
	stack<char> c;					//'('�� �����ϴ� ����
	int cnt = 0;					//�߷��� �踷��� ������ �� ����

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')			//'('�� ��� ���ÿ� ����
			c.push(s[i]);
		else						//')'�� ���
		{
			c.pop();				//���ÿ��� ����

			if (s[i - 1] == '(')	//�������� ���
				cnt += c.size();	//�����ִ� '(' ������ŭ ���Ѵ� -> �ֳ��ϸ� �̰� �踷����� �����̹Ƿ�
			else					//������� ���� ��� -> ')'
				cnt++;
		}			
	}

	cout << cnt << endl;

	return 0;
}