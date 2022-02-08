#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int n, m;						//n : ��ǻ�� ����, m : �ŷ� ���� ��
int ans = -1;					//���� ���� ��ŷ�� �� �ִ� ��ǻ�� ���� 
vector<int> v[10001];
int visited[10001];				//�湮o : 1, �湮x : 0
int cnt[100001];				//��ŷ�� �� �ִ� ��ǻ�� ����

void dfs(int x, int c)			//dfs(��ǻ�� ��ȣ, ��ŷ�� ������ ��ǻ�� ��ȣ)
{
	if (visited[x])
		return;
	
	visited[x] = 1;
	cnt[c]++;

	for (int i = 0; i < v[x].size(); i++)
	{
		int y = v[x][i];

		dfs(y, c);
	}
}

int main()
{
	int a, b;
	
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)
	{
		memset(visited, 0, sizeof(visited));

		dfs(i, i);

		ans = max(ans, cnt[i]);					//��ŷ�� �� �ִ� ��ǻ�� �� ���� ���� ���� ã��
	}

	for (int i = 1; i <= n; i++)
		if (ans == cnt[i])
			cout << i << ' ';

	cout << endl;


	return 0;
}