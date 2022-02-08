#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;

int n;							//�׽�Ʈ ���̽� ����
int l;							//ü���� �� ���� ����
int sx, sy, ex, ey;				//sx,sy : ����, ex,ey : ��
int visited[301][301];
int cnt[301][301];				//������ ����
int dx[] = { -2,-1,1,2,2,1,-1,-2 };
int dy[] = { 1,2,2,1,-1,-2,-2,-1 };

int bfs(int x, int y)
{
	for (int i = 0; i < l; i++)
		for (int j = 0; j < l; j++)
			cnt[i][j] = 2e9;

	queue<pair<int, int> > q;
	int ax, ay;

	q.push(make_pair(x, y));

	cnt[x][y] = 0;

	while (!q.empty())
	{
		auto a = q.front();

		q.pop();

		if (a.first == ex && a.second == ey)	//�� ��ǥ�� ������ ��ǥ�� ���� ���
			return cnt[ex][ey];


		for (int i = 0; i < 8; i++)
		{
			ax = a.first + dx[i];
			ay = a.second + dy[i];

			if ((ax >= 0 && ax < l) && (ay >= 0 && ay < l))
			{
				if (!visited[ax][ay])
				{
					q.push(make_pair(ax, ay));
					visited[ax][ay] = 1;
					cnt[ax][ay] = min(cnt[ax][ay], cnt[a.first][a.second] + 1);
				}
			}
		}
	}
}


int main()
{
	cin >> n;
	

	for (int i = 0; i < n; i++)
	{
		memset(visited, 0, sizeof(visited));	

		cin >> l;
		cin >> sx >> sy >> ex >> ey;

		cout << bfs(sx, sy) << endl;
	}
	return 0;
}