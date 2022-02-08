#include <iostream>
using namespace std;

int main()
{
	int n, m;						//n : �л� ��, m : �� �л��� Ű�� ���� Ƚ��
	int a, b;
	int cnt = 0;					//�ڽŰ� ���� �� ���� �л��� ��
	int ans = 0;					//�ڽ��� Ű�� �� ��°���� �� �� �ִ� �л� ��
	int arr[501][501] = { 0, };

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		arr[a][b] = 1;
	}

	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (arr[i][k] && arr[k][j])
					arr[i][j] = 1;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cnt = 0;

		for (int j = 1; j <= n; j++)
		{
			if (i == j)							//�ڱ� �ڽ� ����
				continue;
			if (!arr[i][j] && !arr[j][i])		//i�� j�� ����� ���� ���ٸ�
				cnt++;
		}

		if (cnt == 0)							//��� �� ����Ǿ� �ִٸ�
			ans++;
	}

	cout << ans << endl;


	return 0;
}