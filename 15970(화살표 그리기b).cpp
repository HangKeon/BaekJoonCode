#include <iostream>
using namespace std;

int main()
{
	int n;								//���� ����
	int pos[5001];						//���� ��ġ
	int sum = 0;						//ȭ��ǥ�� ������ ��
	int min;							//�� �������� ȭ��ǥ ������ �ּڰ�
	int tmp;							//ȭ��ǥ�� �ӽ� ����

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> pos[i];
	
	for (int i = 0; i < n; i++)
	{
		min = 100001;					//�ֳ��ϸ� ���� ��ǥ�� �ִ� ��ġ�� 100000�̱� �����̴�.

		for (int j = 0; j < n; j++)
		{
			if (i == j)					//���� ���� ���̶��
				continue;

			if (pos[i] >= pos[j])
				tmp = pos[i] - pos[j];
			else
				tmp = pos[j] - pos[i];

			if (min > tmp)				//�ּڰ� > ȭ��ǥ�� ����
				min = tmp;
		}

		sum += min;						//��pos[i]������ �ּ� ȭ��ǥ ���� min�� �� sum�� ���ϱ�
	}

	cout << sum << endl;



	return 0;
}