#include <iostream>
using namespace std;

int arr[2001][2001] = { 0, };			//arr[����][�и�] = �����ϸ� 1, ������ 0

int gcd(int a, int b)						//�ִ�����
{
	int c;

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}

int main()
{
	int m, n;								//���� ������ ����
	int share;								//�и� ������ �ִ�����
	int cnt = 0;							//���� �¼��� ��

	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			share = gcd(i, j);

			int tmp = arr[j / share][i / share];

			if (tmp==0)							//���� tmp�� ���� �� ���� ������� ���� �¼��̶��
			{
				tmp++;								//1�� ����
				cnt++;
			}
		}
	}

	cout << cnt << endl;



	return 0;
}