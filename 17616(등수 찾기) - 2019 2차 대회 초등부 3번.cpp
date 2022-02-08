#include <iostream>
#include <vector>
using namespace std;

int n, m, x;									// n : �л� ��, m : ���� Ƚ��, x : �л� ��ȣ
int a, b;										// a�� b���� �� ���ߴ�.
int u, v;										// u : ������ ���� ���� ���, v : ������ ���� ���� ���

vector<int> v1[100001];							//�ڽź��� ����� ���� ģ������ ���
vector<int> v2[100001];							//�ڽź��� ����� ���� ģ������ ���

int visited[100001];							//�ڽź��� ����� ���� ģ������ ���� ���
int visited2[100001];							//�ڽź��� ����� ���� ģ������ ���� ���

int cnt = 0;
int cnt2 = 0;

void dfs1(int node)								//dfs1(��� ��ȣ)
{
	visited[node] = 1;

	for (int i = 0; i < v1[node].size(); i++)
	{
		int k = v1[node][i];

		if (!visited[k])
		{
			dfs1(k);
			cnt++;
		}
	}
}

void dfs2(int node)								//dfs2(��� ��ȣ)
{
	visited2[node] = 1;

	for (int i = 0; i < v2[node].size(); i++)
	{
		int k = v2[node][i];

		if (!visited2[k])
		{
			dfs2(k);
			cnt2++;
		}
	}
}


int main()
{
	cin >> n >> m >> x;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		
		v1[a].push_back(b);						//���ϴ� ģ���� �׷��� �����
		v2[b].push_back(a);						//���ϴ� ģ���� �׷��� �����
	}

	dfs1(x);
	dfs2(x);

	v = n - cnt;							//������ ������ ���� ģ���� ���� ������ ���
	u = 1 + cnt2;							//������ ������ ���� ģ���� ���� ������ ���

	cout << u << ' ' << v << endl;

	return 0;
}