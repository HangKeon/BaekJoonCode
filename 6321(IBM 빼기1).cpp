#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;											//��ǻ���� ����
	string com;										//��ǻ�� �̸�
	cin >> n;

	for (int i = 1; i <= n; i++)						//�Է�n�� ���� �ݺ���
	{
		cin >> com;

		cout << "String #" << i << endl;

		for (int j = 0; j < com.length(); j++)		//�Է��� ���ڿ� com�� ���� �ϳ� �� Ȯ��
		{
			if (com[j] == 'Z')						//���� ���� Z�� �ԷµǸ�
				cout << 'A';						//A�� ���
			else									//������ ���ĺ��� ���
				cout << (char)(com[j] + 1);			//���� ���ĺ��� ���
		}
		cout << endl << endl;
	}
	return 0;
}