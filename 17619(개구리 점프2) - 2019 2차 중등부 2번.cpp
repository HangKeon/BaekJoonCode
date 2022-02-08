#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

//�ð��ʰ�

vector<pair<pair<long long,long long>, int> > v[100001];	//�볪���� ũ�⸦ ����
int parent[100001];								//�θ� �볪�� ��ȣ -> ó������ �ڱ� �ڽ��� ����!

int find(int x)
{
	if (parent[x] == x)				//�볪�� ��ȣ == x
		return x;

	return parent[x] = find(parent[x]);
}

void unione(int x, int y)
{
	x = find(x);
	y = find(y);

	if (x < y)
		parent[y] = x;
	else
		parent[x] = y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, q;						//n : �볪���� ����, q : ������ ����
	long long x1, x2, y;					//�볪�� ��ǥ
	int a, b;						//����Ǿ� �ִ��� ��� �볪��

	cin >> n >> q;

	for (int i = 1; i <= n; i++)
	{
		cin >> x1 >> x2 >> y;

		v[i].push_back({ { x1, x2 }, i });	//�볪�� ������(x1), �볪�� ����(x2), �볪�� ��ȣ
	}

	sort(v + 1, v + 1 + n);					//�볪�� ������ ������ ����

	for (int i = 1; i <= n; i++)
		parent[v[i].front().second] = v[i].front().second;

	for (int i = 1; i < n; i++)
	{
		//i�볪���� �� ��ǥ <= (i+1)�볪���� �� ��ǥ <= i�볪���� �� ��ǥ
		if (v[i].front().first.first <= v[i + 1].front().first.first && v[i].front().first.second >= v[i + 1].front().first.first)
		{
			unione(v[i].front().second, v[i + 1].front().second);
		}
	}

	for (int i = 0; i < q; i++)
	{
		cin >> a >> b;

		if (find(a) == find(b))
			cout << "1\n";
		else
			cout << "0\n";
	
	}


	return 0;
}