#include <iostream>
#include <cstring>
using namespace std;

int n, m;					//��, ��
int arr[301][301];
int arr2[301][301];			//arr�� ���纻 -> ���� �� arr�� ����!
int visited[301][301];		//�湮o : 1, �湮 x : 0
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y)
{
	int ax, ay;

	visited[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];

		if ((ax >= 0 && ax < n) && (ay >= 0 && ay < m))
		{
			if (arr[ax][ay] && !visited[ax][ay])
			{
				dfs(ax, ay);
			}

			if (!arr[ax][ay])		//�ٴ��� ���
			{
				arr2[x][y]--;
			}

			if (arr2[x][y] < 0)		//0���� �ٲپ��ֱ�
				arr2[x][y] = 0;
		}
	}
}

int main()
{
	int year = 0;					//2�� �̻����� ������ �и��Ǵµ� �ɸ��� �� ��
	int cnt = 0;					//������ ����

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			arr2[i][j] = arr[i][j];
		}

	while (1)
	{
		memset(visited, 0, sizeof(visited));
		memcpy(arr, arr2, sizeof(arr2));
		cnt = 0;								//�ٽ� �ʱ�ȭ!

		for (int i = 1; i < n - 1; i++)
		{
			for (int j = 1; j < m - 1; j++)
			{
				if (arr[i][j] && !visited[i][j])
				{
					dfs(i, j);
					cnt++;
				}
			}
		}

		//cnt = 1�� ���� ������ 1���� ����̹Ƿ� �� �ʿ�x
		if (cnt == 0)
		{
			cout << '0' << endl;
			return 0;
		}
		else if (cnt > 1)
		{
			cout << year << endl;
			return 0;
		}

		year++;
	}

	return 0;
}