#include <iostream>
#include <vector>
using namespace std;

int cnt;						//�̼�
int sw = 0;						//0 : �̼��� ����, 1 : �̼� ����
vector<int> v[101];
int visited[101];

void dfs(int x, int y)			//dfs(����, ����)
{
	if (x == y)					//ã�� ���
	{
		cout << cnt << endl;
		sw = 1;
		return;
	}

	if (visited[x]) return;

	visited[x] = 1;

	for (int i = 0; i < v[x].size(); i++)
	{
		cnt++;
		dfs(v[x][i], y);
		cnt--;
	}
}

int main()
{
	int n, a, b, m;				//n : ��ü ��� ��, a,b : �̼��� ����ؾ� �ϴ� ���, m : �θ� �ڽ� ���� ����

	cin >> n >> a >> b >> m;

	for (int i = 0; i < m; i++)
	{
		int x, y;

		cin >> x >> y;

		v[x].push_back(y);
		v[y].push_back(x);
	}

	dfs(a, b);

	if (!sw)
		cout << -1 << endl;

	return 0;
}