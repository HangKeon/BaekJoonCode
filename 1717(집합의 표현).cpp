#include <iostream>
using namespace std;

int parent[1000001];

int find(int x)									//ã��
{
	if (parent[x] == x)
		return x;
	else
		return parent[x] = find(parent[x]);
}

void Union(int a, int b)						//������
{
	a = find(a);
	b = find(b);

	if (a < b)
		parent[b] = a;
	else
		parent[a] = b;
}

int main()
{
	ios_base::sync_with_stdio(0);	//�ڵ带 c���� ���   -> c++  < c
	cin.tie(0);						//cin ����ӵ� ���

	int n, m;						//n : ������ ������ ����, m : ������ ����
	int x, a, b;					//x : 0-> a,b ������ ��ģ��, 1 : ���� �������� Ȯ��

	cin >> n >> m;

	for (int i = 0; i <= n; i++)	//�θ� ��带 �ڱ� �ڽ����� ����
		parent[i] = i;

	for (int i = 0; i < m; i++)
	{
		cin >> x >> a >> b;

		if (x == 0)					//a,b ������ ��ģ��
		{
			Union(a, b);
		}
		else if (x == 1)			//a,b�� ���� ���տ� �ִ��� Ȯ��
		{
			if (find(a) == find(b))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}