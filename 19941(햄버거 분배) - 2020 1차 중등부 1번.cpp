#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, k;						//n : ��� ��, k : �Ÿ�
	int cnt = 0;					//�ܹ��Ÿ� ���� �� �ִ� ��� ��
	string s;						//���ڿ�

	cin >> n >> k;

	cin >> s;

	for (int i = 0; i < n; i++)
	{
		for (int j = i - k; j <= i + k; j++)			//P�� �������� H�� ã�� ���� ����
		{
			if (j < 0 || j == i || j >=n)				//�ε��� ������ ����ų� i�� ���� ���� ����!
				continue;

			if (s[i] == 'P')
			{
				if (s[j] == 'H')
				{
					cnt++;
					s[i] = 'k';
					s[j] = 'k';
					break;
				}
			}
		}
	}

	cout << cnt << endl;


	return 0;
}