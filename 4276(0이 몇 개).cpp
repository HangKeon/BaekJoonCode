#include <iostream>
using namespace std;

int main()
{
	unsigned int n, m;
	int arr[10001] = { 0, };
	int cnt = 0;						//0�� ������ ���� ���� ����
	int dis = 0;						//�Է��ϴ� ������ ����
		
	while (1)
	{
		cin >> n >> m;
		dis = m - n;

		if (n < 0 || m < 0)							//n, m < 0
			return 0;								//������

			for (unsigned int i = n; i <= m; i++)
			{
				unsigned int tmp = i;

				for (int j = 0; j < 10; j++)
				{
					if (tmp == 0)
					{
						cnt++;
						break;
					}
					else if (tmp / 10 == 0)
					{
						break;
					}
					else if (tmp % 10 == 0)
					{
						cnt++;
						tmp /= 10;
					}
					else
					{
						tmp /= 10;
					}

				}
			}

		cout << cnt << endl;

		cnt = 0;

	}



	return 0;
}