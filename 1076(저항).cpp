#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color[] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	string t;								//�Է��� ���ڿ�
	int mem[3];								//�Է��� ���ڿ��� �´� ���ڸ� ������ �迭
	long long resist = 0;					//���װ�

	for (int i = 0; i < 3; i++)
	{
		cin >> t;

		for (int j = 0; j < 10; j++)
		{
			if (color[j] == t)				//���� color�� �Է��ϴ� ���ڿ� t�� ���� ���
				mem[i] = j;					//mem�� j���� ���� -> �̶� j�� color�� ����� ���ڿ����� �ε��� ��
		}
	}

	resist = mem[0] * 10 + mem[1];			//ó�� �� 2���� ����

	for (int i = 0; i < mem[2]; i++)			//������ ���� ����
		resist *= 10;

	cout << resist << endl;


	return 0;
}