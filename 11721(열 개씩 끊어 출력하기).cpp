#include <iostream>
using namespace std;

int main()
{
	char str[100];						//���ڿ��� �Է��ϱ� ���� ����, ���ڿ��� 100�� ���� �ʱ� ������ �迭�� 100���� ����.
	int len = 0;						//�Է��� ���ڿ��� ���̸� ǥ���ϱ� ���� ����

	cin >> str;
	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		cout << str[i];					//�Է��� ���ڿ��� ���

		if ((i + 1) % 10 == 0)			//i=0 ���� �����ϱ� ����.
			cout << "\n";
	}



	return 0;
}

//��