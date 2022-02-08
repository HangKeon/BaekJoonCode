#include <iostream>
using namespace std;

int v[2001][2001], cnt;                //v[�и�][����] : ���߼��� ��ġ�� �м��� ����� ���м��� ���� ��ġ�� ����, cnt = ���߼� ����

int gcd(int a, int b)                 //�ִ�����
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
	int a, b;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int sum = gcd(i, j);

			if (!v[i / sum][j / sum])                    //v[i/sum][j/sum]�� �ߺ��� �ƴ� ���
			{
				v[i / sum][j / sum] = 1;                  //�̹� ���߼� �ڸ��� �����ߴ����� ���� ǥ��
				cnt++;                              //���߼� ���� 1 ����
			}
		}
	}

	cout << cnt << endl;


	return 0;
}