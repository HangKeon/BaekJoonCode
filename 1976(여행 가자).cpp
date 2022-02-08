#include <iostream>
#include <algorithm>
using namespace std;

int parent[201];

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

	if (a < b)
		parent[b] = a;
	else
		parent[a] = b;
}

int main()
{
	int n, m;						//n : ������ ��, m : ���� ��ȹ�� ���� ������ ��
	int arr;
	int plan[1001];					//���� ��ȹ

	cin >> n >> m;

	for (int i = 0; i <= n; i++)
		parent[i] = i;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr;

			if (arr)				//arr == 1�� ���
				Union(i, j);		//������
		}
	}

	for (int i = 1; i <= m; i++)
		cin >> plan[i];

	sort(plan, plan + m + 1);		//������������ ������ ���� ���� ��� ��ȣ�� plan[1]�� ����

	arr = find(plan[1]);			//arr�� ���� ���� ��� ��ȣ�� �̸� ���� -> �ֳ��ϸ� ���� �� �� ���ε� ��� �Լ��� �θ��� ��ȿ�����̱� ���� 

	for (int i = 2; i <= m; i++)
	{
		if (arr != find(plan[i]))
		{
			cout<<"NO\n";
			return 0;
		}
	}

	cout << "YES\n";


	return 0;
}