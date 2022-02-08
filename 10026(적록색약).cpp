#include <iostream>
#include <cstring>
using namespace std;

char rgb[101][101];						//RGB�� ������ �迭
int visited[101][101] = { 0, };			//visited[i][j]�� �湮�� ���� 1, �湮���� ���� ���� 0�� ���
int n, cnt = 0;							//n = ����, cnt = ���ϻ����� �ƴ� ����� ������ ������ ��
int cnt2 = 0;							//cnt2 = ���ϻ����� ����� ������ ������ ��

void dfs(int a, int b)
{
	for (int i = a; i <= n; i++)
	{
		for (int j = b; j <= n; j++)
		{
			if (visited[i][j])			//Ż������
				return;

			visited[i][j]++;									//�ڱ� �ڽŵ� �湮�� ���̹Ƿ� 1����

			if (rgb[i][j] == rgb[i - 1][j] && i >= 2)			//������ ���� ���
			{
				dfs(i - 1, j);
			}

			if (rgb[i][j] == rgb[i][j + 1] && j < n)			//�������� ���� ���
			{
				dfs(i, j + 1);
			}

			if (rgb[i][j] == rgb[i][j - 1] && j >= 2)			//������ ���� ���
			{
				dfs(i, j - 1);
			}

			if (rgb[i][j] == rgb[i + 1][j] && i < n)			//�Ʒ����� ���� ���
			{
				dfs(i + 1, j);
			}

			return;
		}

	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> rgb[i][j];


	for (int i = 1; i <= n; i++)					//���ϻ����� �ƴ� ����� �� ��� ������ �� ���ϱ�
	{
		for (int j = 1; j <= n; j++)
		{
			if (!visited[i][j])
			{
				dfs(i, j);
				cnt++;
			}
		}

	}

	memset(visited, 0, sizeof(visited));		//visited�� 0���� �ʱ�ȭ

	for (int i = 1; i <= n; i++)					//R�� G�� ���� �ٲٱ� -> ���ϻ����� ���� ����
	{
		for (int j = 1; j <= n; j++)
		{
			if (rgb[i][j] == 'G')
			{
				rgb[i][j] = 'R';
			}
		}

	}

	for (int i = 1; i <= n; i++)					//���ϻ����� ����� �� ������ �� ���ϱ�
	{
		for (int j = 1; j <= n; j++)
		{
			if (!visited[i][j])
			{
				dfs(i, j);
				cnt2++;
			}
		}

	}

	cout << cnt << ' ' << cnt2 << endl;

	return 0;
}