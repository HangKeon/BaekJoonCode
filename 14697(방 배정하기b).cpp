#include <iostream>
using namespace std;

int main()
{
	int a, b, n;					//a,b : ���� ����, n : ��ü �л� ��
	int ans = 0;					//�� ħ�� ���� ���� �������� �����ϴ� ����

	cin >> a >> b >> n;

	for (int i = 0; i <= 50; i++)
	{
		for (int j = 0; j <= 50; j++)
		{
			if (a*i + b * j == n)
			{
				ans = 1;
				break;
			}
		}
	}

	cout << ans << endl;


	return 0;
}