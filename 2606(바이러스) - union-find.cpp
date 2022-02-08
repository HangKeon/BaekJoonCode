#include <iostream>
using namespace std;

int parent[101];				//�θ� ���

int find(int x)
{
	if (x == parent[x])
		return x;
	else
		return parent[x] = find(parent[x]);
}

void Union(int a, int b)
{
	a = find(a);
	b = find(b);

	if (a < b)
		parent[b] = a;				//b�� �ֻ��� �θ� a�� ����
	else							
		parent[a] = b;				//a�� �ֻ��� �θ� b�� ����
}

int main()
{
	int n, m;						//n : ��ǻ���� ��, m : ���� ����Ǿ� �ִ� ��ǻ���� �� ��
	int root;						//��ǻ�� 1���� �ش��ϴ� ����
	int ans = 0;					//1�� ��ǻ�͸� ���� �� ���̷����� �ɸ��� �Ǵ� ��ǻ���� ��
	int a, b;

	cin >> n >> m;

	for (int i = 0; i <= n; i++)	//�θ� �迭�� �ڱ� �ڽ����� �ʱ�ȭ
		parent[i] = i;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		Union(a, b);
	}

	root = find(1);

	for (int i = 2; i <= n; i++)
		if (find(i) == root)
			ans++;

	cout << ans << endl;

	return 0;
}