#include <iostream>
using namespace std;

int main()
{
	int k, c, m, n;							//k = ������ ���� ��, c = �Է� ����,m = ������ ����, n = ������ ����
	int cnt;								//���� ���� ��
	int gap;								//m,n�� ����

	cin >> k >> c;

	for (int i = 0; i < c; i++)
	{
		cin >> m >> n;

		if (m == n)							//���� ���� �׻� 1 ���
			cout << "1" << endl;
		else if (m > n)						//m > n�� ���
		{
			gap = m - n;					//���� - ����
			cnt = k - m;					//���� ���� �� - ����

			if (gap - cnt <= 2)
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (m < n)
		{
			gap = n - m;
			cnt = k - n;

			if (gap - cnt <= 1)
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
	}

	return 0;
}







/*
		if (m <= n && n > (k + m + 1) / 2)
			cout << "0" << endl;
		else if (m > n && m>(k + n) / 2 + 1)
			cout << "0" << endl;
		else
			cout << "1" << endl;

			*/
	
