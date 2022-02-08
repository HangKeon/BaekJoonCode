#include <iostream>
using namespace std;

int main()
{
	int n;								//���� ����
	int color[5001] = { 0, };			//���� ��
	int pos[100001] = { 0, };			//���� ��ǥ
	int min;							//�� �Ÿ��� �ּڰ��� �����ϴ� ����
	int sum = 0;						//��� ���鿡�� �����ϴ� ȭ��ǥ���� ���� ��

	cin >> n;

	for (int i = 0; i < n; i++)			//(���� ��ǥ, ���� ��)�� �Է�!
		cin >> pos[i] >> color[i];

	for (int i = 0; i < n; i++)
	{
		min = 100001;					//min�� 100001�� �ʱ�ȭ -> �� ������ �ʱ�ȭ ������Ѵ�.

		for (int j = 0; j < n; j++)
		{
			if (i == j)					//�ڱ� �ڽŰ� ���ϸ� �ȵǱ� �����̴�. -> �׷� ������ �� ���� �Ÿ� = 0�� �ȴ�. 
				continue;

			if (color[i] == color[j])	//���� ������ ���ٸ�
			{
				int tmp;				//�� �Ÿ� �ӽ� ����

				if (pos[i] >= pos[j])	//�� ���� �Ÿ� ���ϱ�
					tmp = pos[i] - pos[j];
				else
					tmp = pos[j] - pos[i];

				if (min > tmp)			//���� ���� tmp�� min���� ª�ٸ�
					min = tmp;			//min�� tmp ����!
			}
		}
		sum += min;
	}

	cout << sum << endl;

	return 0;
}