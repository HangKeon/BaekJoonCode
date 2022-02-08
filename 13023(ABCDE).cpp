#include <iostream>
#include <vector>
using namespace std;

int n, m;						//n : ����� ��, m : ģ�� ���� ��
int a, b;
int sw;							//sw = 1�� �� dfs ����!
int cnt;
vector<int> v[2001];
int visited[2001];

void dfs(int x, int c)			//dfs(��� ��ȣ, ģ�� ���� ��)
{
	if (c == 4)					//Ż������
	{
		sw = 1;
		return;
	}

	visited[x] = 1;

	for (int i = 0; i < v[x].size(); i++)
	{
		int y = v[x][i];

		if (!visited[y])
		{
			dfs(y, c + 1);
		}
	}

	visited[x] = 0;					//�̹湮ó��
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 0; i < n; i++)
	{
		dfs(i, 0);

		if (sw)
		{
			cout << '1' << endl;
			return 0;
		}
	}

	cout << '0' << endl;

	return 0;
}