#include <iostream>
#include <string>
using namespace std;

int main()
{
	char odd[] = { 'a','e','i','o','u' };			//������ ��Ÿ���� �迭
	string s;										//�Է��� ���ڿ�

	while (1)
	{
		int first_condition = 0;					//1�� ������ ������ ǥ���ϱ� ���� ����
		int t = 1;									//1,2,3������ ��� ���� ���
		int odd_cnt = 0;									//������ �������� ������ ��� ���� ����
		int even_cnt = 0;									//������ �������� ������ ��� ���� ����

		cin >> s;

		if (s == "end")								//�Է��� ���ڿ�s�� end�� ���
			break;

		for (int i = 0; i < s.length(); i++)			//�Է��� ���ڿ�s�� ����odd�� ��
			for (int j = 0; j < 5; j++)
				if (s[i] == odd[j])					//���� s�� ������ ���� �ִٸ� -> 1�� ����
					first_condition = 1;

		if (!first_condition)						//1�� ���ǿ� �������� �ʴٸ�
		{
			cout << "<" << s << ">�� ����� �� �����ϴ�." << endl;
			t = 0;
		}
		else
		{
			for (int i = 0; i < s.length(); i++)
			{
				int second_condition = 0;							//2�� ������ ���� ����


				if (s[i + 1] == s[i] && s[i] != 'e'&&s[i] != 'o')	//3�� ������ �������� ���� ��
				{
					cout << "<" << s << ">�� ����� �� �����ϴ�." << endl;
					t = 0;
					break;
				}

				for (int j = 0; j < 5; j++)							//2�� ������ ���� ������ ���� ��츦 Ȯ��
					if (s[i] == odd[j])
						second_condition = 1;

				if (second_condition)								//������ �������� ���� ���
				{
					odd_cnt++;
					even_cnt = 0;
				}
				else												//������ �������� ���� ���
				{
					odd_cnt = 0;
					even_cnt++;
				}

				if (odd_cnt == 3 || even_cnt == 3)					//2�� ����
				{
					cout << "<" << s << ">�� ����� �� �����ϴ�." << endl;
					t = 0;
					break;
				}
			}
		}

		if (t)														//1,2,3 ��� ������ �� �����ϴ� ���
			cout << "<" << s << ">�� ��밡�� �մϴ�." << endl;
	}

	return 0;
}