#include <iostream>
using namespace std;

int main()
{
	int N;								//�б��� ��
	int student = 0, apple = 0;			//�л� ��, ������� -> �ʱ�ȭ
	int sum = 0;						//���� ��� �� ����

	cin >> N;

	for (int i = 0; i < N; i++)			//N��ŭ �Է��� �ݺ�
	{
		cin >> student >> apple;
		sum += apple % student;			//�� �б����� ���� ��� ������ ����.
	}

	cout << sum << endl;

	return 0;
}

//��