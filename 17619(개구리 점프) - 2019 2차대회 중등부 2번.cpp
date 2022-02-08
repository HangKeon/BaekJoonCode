#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct info
{
	int x1, x2, idx;				//x1,x2 : �볪�� ��ǥ, idx : �볪�� ��ȣ
}info;

int parent[100001];					//�θ� �볪�� ��ȣ
vector<info> v;

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


bool cmp(const info & a, const info & b)
{
	return a.x1 < b.x1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, q;						//n : �볪���� ����, q : ������ ����
	int x1, x2, y;					//�볪�� ��ǥ
	int a, b;						//����Ǿ� �ִ��� ��� �볪��

	cin >> n >> q;

	for (int i = 1; i <= n; i++)
	{
		cin >> x1 >> x2 >> y;

		v.push_back({ x1,x2,i });		//���⼭ �˾ƾ� �ϴ� ���� v[0]���� ä�����ٴ� ���̴�

		parent[i] = i;					//ó������ �ڱ� �ڽ��� ����Ŵ
	}

	sort(v.begin(), v.end(), cmp);			//�������� ����

	for (int i = 0, j = 1; i < n && j < n;)
	{

		//j�볪���� �� ��ǥ <= i�볪���� �� ��ǥ
		if (v[j].x1 <= v[i].x2)
		{
			unione(v[i].idx, v[j].idx);
			j++;
		}
		else
			i++;

	}

	for (int i = 0; i < q; i++)
	{
		cin >> a >> b;

		//cout << findParent(a, b) << endl;		//�ð��ʰ� ��
		if (find(a) == find(b))
			cout << "1\n";
		else
			cout << "0\n";
	}
	
	return 0;
}