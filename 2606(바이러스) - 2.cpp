#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;					//���̷����� �ɸ� ��ǻ�� ����
vector<int> v[101];				//�׷���
int visited[101];				//�湮 ó��

void dfs(int x)
{
	if (visited[x]) return;

	visited[x] = 1;

	cnt++;

	for (int i = 0; i < v[x].size(); i++)
		dfs(v[x][i]);
}

int main() 
{
	int n;						//��ǻ���� ��
	int m;						//��ǻ���� �� �� 
	
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;

		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);

	cout << cnt - 1 << endl;
}