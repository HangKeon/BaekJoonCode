#include <iostream>
#include <cstring>
using namespace std;

int t;					//�׽�Ʈ ���̽� ����
int m, n, k;			//m : ���� ����, n : ���� ����, k : ���� ���� ��ġ�� ����
int x, y;				//������ ��ġ
int arr[51][51];		//���� ũ��
int visited[51][51];	//�湮 o : 1, �湮x : 0
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y)
{
	int ax, ay;

	visited[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];

		if (arr[ax][ay] > 0 && !visited[ax][ay])
		{
			if ((ax >= 0 && ax < m) && (ay >= 0 && ay < n))
				dfs(ax, ay);
		}
	}
}

int main()
{
	cin >> t;

	while (t--)
	{
		int cnt = 0;					//�ּ��� ������������ ���� ��

		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));

		cin >> m >> n >> k;

		for (int i = 0; i < k; i++)
		{
			cin >> x >> y;
			arr[x][y] = 1;
		}

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] > 0 && !visited[i][j])
				{
					dfs(i, j);

					cnt++;
				}
			}
		}

		cout << cnt << endl;

	}
	return 0;
}