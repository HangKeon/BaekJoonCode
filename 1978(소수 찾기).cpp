#include <iostream>
using namespace std;

int main()
{
	int n;								//�Է��� ������ ����
	int prime;							//�Է��� ����
	int cnt = 0;						//�Ҽ��� ����

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> prime;

		//if (prime <= 1)					//���� prime�� 1�� ���
		//	continue;					//����

		if (prime > 1)
		{

			for (int j = 2; j < prime; j++)	//�Ҽ� �Ǻ�
			{
				if (prime%j == 0)			//������������
					prime = 0;				//prime�� 0���� �ٲ�
			}

			if (prime != 0)					//�Ҽ��� ���
				cnt++;						//cnt�� 1 ����
		}
	}

	cout << cnt << endl;

	return 0;
}