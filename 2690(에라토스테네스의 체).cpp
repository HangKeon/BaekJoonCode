#include <iostream>
using namespace std;

//int a[1001];

int main()
{
	int n, k;								//n = ���� �Ҽ��� ����, k = 2 ~ n���� �������� ������ �� ���� ����
	int cnt = 0;							//������ ���� ������ �����ϱ� ���� ����
	int a[1001];

	cin >> n >> k;

	for (int i = 2; i <= n; i++)
		a[i] = i;

	for (int i = 2; i <= n; i++)
	{
		if (a[i] == 0)						//������ ���
			continue;

		for (int j = i; j <= n; j += i)
		{
			if (a[j] == 0)					//������ ���
				continue;
			else							//�������� ���� ���
			{
				a[j] = 0;					//�����
				cnt++;						//���� ������ ����
			}

			if (cnt == k)					//���� ���� ���� = k ���
			{
				cout << j << endl;
				break;
			}
		}
	}

	//PrimeNumberSieve(n, k);


	return 0;
}

/*void PrimeNumberSieve(int n, int k)
{
	int cnt = 0;							//������ ���� ������ �����ϱ� ���� ����

	for (int i = 2; i <= n; i++)
		a[i] = i;

	for (int i = 2; i <= n; i++)
	{
		if (a[i] == 0)						//������ ���
			continue;

		for (int j = i; j <= n; j += i)
		{
			if (a[j] == 0)					//������ ���
				continue;
			else							//�������� ���� ���
			{
				a[j] = 0;					//�����
				cnt++;						//���� ������ ����
			}

			if (cnt == k)					//���� ���� ���� = k ���
			{
				cout << j << endl;
				break;
			}
		}
	}
}
*/
