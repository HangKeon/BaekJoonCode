#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

int n, x, y;			//n : ���� ���� ����, x,y : �� �κ��� ��ġ�� ���� ��ȣ
int a, b, c;			//c : ����� ����
vector<pair<int, int> > v[100001];
int visited[100001];	//1 : �湮o , 0 : �湮x

void dfs(int node, int sum, int m)	//dfs(��� ��ȣ, ����� ��ü ���� ��, ��� ���� �� ���� �� ����)
{
	if (node == y)					//Ż������
	{
		cout << sum - m << endl;
		return;
	}


	visited[node] = 1;				//�湮ó��

	for(auto i:v[node])
		if (!visited[i.first])
		{
			dfs(i.first, sum + i.second, max(m,i.second));
		}
}

int main()
{
	cin >> n >> x >> y;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> a >> b >> c;
		v[a].push_back({ b,c });
		v[b].push_back({ a,c });
	}

	dfs(x, 0, 0);

	return 0;
}