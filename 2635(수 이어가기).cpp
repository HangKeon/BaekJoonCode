#include <iostream>
using namespace std;
//2000 �ʵ�� 1��

int main()
{
	int n;						//ó�� �Է��� ��
	int m;						//�� ��° �Է��� ��
	int a;						//n�� ���� �ӽ÷� ������ ����
	int j;						//max���� i�� �����ϴ� ����
	int temp;					//ù ��° �� - �� ��° ���� ������ ����
	int cnt = 1;				//��Ģ�� ���� ���� �� �ִ� �ִ� ����
	int max = -1;				//cnt �� �ִ��� ���� ������ ����

	cin >> n;
	
	for (int i = 1;i <= n; i++)
	{
		a = n;					//n�� ���� �ٲ�� �ȵǹǷ� a�� ����
		m = i;					//n���� �۰ų� ���� ��� ���� �߿��� cnt�� ���� ū ���� ���ؾ� �ϹǷ� i�� ����!

		cnt++;

		while (a - m >= 0)
		{
			int temp = m;
			m = a - m;
			a = temp;
			cnt++;
		}

		if (max < cnt)
		{
			max = cnt;
			j = i;
		}
		
		cnt = 1;
	}

	cout << max << endl;

	cout << n << ' ' << j << ' ';

	for (int i = 2; i < max; i++)
	{
		temp = j;
		j = n - j;
		n = temp;

		cout << j << ' ';
	}

	cout << endl;



	return 0;
}