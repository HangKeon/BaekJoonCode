#include <iostream>
using namespace std;

int main()
{
	int a, b, c;						//a,b,c : ���� ������ ��Ÿ���� ���� �ٸ� �� �ڿ���
	int n;								//��ü �л� ��
	int ans = 0;

	cin >> a >> b >> c >> n;

	for (int i = 0; i <= 50; i++)
	{
		for (int j = 0; j <= 50; j++)
		{
			for (int k = 0; k <= 50; k++)
			{
				if (a*i + b * j + c * k == n)
					ans = 1;

			}
		}
	}

	cout << ans << endl;


	return 0;
}