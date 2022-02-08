#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[101];				//��ǻ�Ͱ� ���� ����Ǿ����� Ȯ���� �迭			
int visited[101];				//�湮�� Ȯ���ϴ� �迭
int cnt = 0;					//1�� ��ǻ�͸� ���� ���̷����� �ɸ� ��ǻ���� ��

void dfs(int x)
{
	if (visited[x])				//�̹� �湮�� ��� Ż��!
		return;

	visited[x] = 1;				//�湮 ���Ѱ�� -> �湮ó��!

	if(x!=1)					//1�� �ڱ��ڽ��� �����ϰ� �����ϹǷ� ����!
		cnt++;

	for (int i = 0; i < v[x].size(); i++)
	{
		int y = v[x][i];		//v[x]�� ����� �ٸ� ��ǻ�͵�

		dfs(y);
	}

}

void bfs(int s)
{
	queue<int> q;				//��޵� ��ǻ�͵��� ������� ť�� ����

	q.push(s);
	visited[s] = 1;				//q�� �Էµ� s�� �湮ó��!

	while (!q.empty())			//q�� ������� �ʴٸ�
	{
		int x = q.front();		//q�� ���� ���� ���� ����

		q.pop();				//q�� ���� �տ� �ִ� ���� �����ش�

		for (int i = 0; i < v[x].size(); i++)
		{
			int y = v[x][i];	//x�� ����� �ٸ� ��ǻ�͵��� ����!

			if (!visited[y])	//y�� �湮���� ���� ���
			{
				q.push(y);
				visited[y] = 1;
				cnt++;
			}
		}
	}
}




int main()
{
	int n, m;					//n : ��ǻ�� ��, m : ��Ʈ��ũ�� ����� ��ǻ�� �� ��
	int a, b;					//����� ��ǻ�� a,b

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);
	//bfs(1);

	cout << cnt << endl;

	return 0;
}