#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> node[1001];				//�� ������ ����� ���� ������ ������ �迭
int visited[1001];					//������ �湮�ߴ��� Ȯ���ϴ� �迭	-> DFS
int visited2[1001];					//������ �湮�ߴ��� Ȯ���ϴ� �迭 -> BFS

void bfs(int start)
{
	queue<int> q;

	q.push(start);					//ť�� start ���� �ֱ�

	visited2[start] = 1;				//�湮�� ������ �ٲٱ�

	while (!q.empty())				//q�� ������� ���� ��� ����
	{
		int x = q.front();			//ť�� ���� ���� ���� ����

		q.pop();					//������ ��������

		cout << x << ' ';

		for (int i = 0; i < node[x].size(); i++)
		{
			int y = node[x][i];

			if (!visited2[y])		//��� y�� �湮�� ���ߴٸ�
			{
				q.push(y);			//q�� ����
				visited2[y] = 1;		//y�� �湮ó��
			}
		}

	}
}

void dfs(int x)
{
	if (visited[x])				//start ��带 �̹� �湮�� ��� Ż��!
		return;

	visited[x] = 1;				//�湮�� �� �� ��� -> �湮ó��!

	cout << x << ' ';

	for (int i = 0; i < node[x].size(); i++)
	{
		int y = node[x][i];		//��� x�� ����� i��° ��带 ����

		dfs(y);
	}

}

int main()
{
	int n, m, v;					//n : ������ ����, m : ������ ����, v : Ž���� ������ ��ȣ
	int x, y;						//����� ��� x,y

	cin >> n >> m >> v;

	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;

		node[x].push_back(y);
		node[y].push_back(x);
	}

	for (int i = 1;i<=n;i++)		//node[i]�� ����� ������ ������������ ����!
	{
		sort(node[i].begin(), node[i].end());
	}

	dfs(v);

	cout << endl;

	bfs(v);

	cout << endl;

	return 0;
}