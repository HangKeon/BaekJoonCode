#include <iostream>
using namespace std;

int parent[300001];
int visited[300001];			//�湮 ���� Ȯ��

int find(int x)
{
	if (parent[x] == x)
		return x;
	else
		return parent[x] = find(parent[x]);
}

void Union(int a, int b)
{
	a = find(a);
	b = find(b);

	parent[a] = b;					//���� ��ȣ�� ������ ��ȣ�� �θ�� ����.

	cout << "LADICA\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);						//cin ����ӵ� ���

	int n, l;						//n : ������ ����, l : ������ ����
	int a, b;						//������ ��ȣ
	int temp;						//�ӽ÷� ����

	cin >> n >> l;

	for (int i = 0; i <= l; i++)
		parent[i] = i;

	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;

		if (!visited[a])			//1�� ��Ģ
		{
			visited[a] = 1;
			Union(a, b);
		}
		else if (!visited[b])		//2�� ��Ģ
		{
			visited[b] = 1;
			Union(b, a);
		}
		else if (!visited[find(a)])	//3�� ��Ģ
		{
			temp = find(a);
			visited[temp] = 1;
			Union(a, b);
		}
		else if (!visited[find(b)])	//4�� ��Ģ
		{
			temp = find(b);
			visited[temp] = 1;
			Union(b, a);
		}
		else						//5�� ��Ģ
		{
			cout << "SMECE\n";
		}
	}

	return 0;
}