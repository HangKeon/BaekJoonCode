#include <iostream>
using namespace std;

int main()
{
	int n;						//������ ũ��
	int arr[100001];			//������ ������ ����
	int m;						//������ ����
	int a, b, c;				//�Է��ϴ� ���� ��
	int tcnt = 0, cnt = 0;		//tcnt : ¦���� ����, cnt : Ȧ���� ����

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];

		if (arr[i] % 2 == 0)
			tcnt++;
		else
			cnt++;
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;

		if (a == 1)					//arr[b]�� c�� �ٲ۴�
		{
			if (arr[b] % 2 == 0)	//���� arr[b]�� ¦���� ���
			{
				if (c % 2 == 1)		//c�� Ȧ���� ���
				{
					tcnt--;			//¦�� ���� ����
					cnt++;			//Ȧ�� ���� ����
				}
			}
			else					//���� arr[b]�� Ȧ���� ���
			{
				if (c % 2 == 0)		//c�� ¦���� ���
				{
					tcnt++;			//¦�� ���� ����
					cnt--;			//Ȧ�� ���� ����
				}
			}
			
			arr[b] = c;

		}
		else if (a == 2)			//b ~ c �� ���ϴ� arr�� ¦�� ������ ��� 
		{
			int k = 0;				//b~c ������ ������ ¦���� ����

			for (int j = 1; j < b; j++)
			{
				if (arr[j] % 2 == 0)
					k++;
			}

			for (int j = c + 1; j <= n; j++)
			{
				if (arr[j] % 2 == 0)
					k++;
			}

			cout << tcnt - k << endl;
		}
		else						//b ~ c �� ���ϴ� arr�� Ȧ�� ������ ���
		{
			int k = 0;				//b~c ������ ������ Ȧ���� ����		

			for (int j = 1; j < b; j++)
			{
				if (arr[j] % 2 == 1)
					k++;
			}

			for (int j = c + 1; j <= n; j++)
			{
				if (arr[j] % 2 == 1)
					k++;
			}

			cout << cnt - k << endl;
		}
	}

	return 0;
}