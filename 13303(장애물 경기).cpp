#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int n;					//��ֹ��� ����
int sy, ex;				//sy : ������ y, ex : ������ x
int x, yl, yh;
int sum, k;				//sum : �ִ� ����� ����, k : ���� ������ ����
pair<int, pair<int, int> >p[100001];	//(x, yl, yh)�� ����!

void dfs(int idx,int xv, int yv, int s)			//dfs(p�� �ε���, x��ǥ, y��ǥ, ������)
{
	if (idx >= n)
	{
		sum = s;
		return;
	}

	if (yv < p[idx].second.first || yv > p[idx].second.second)
		idx++;

	int m;
	int y;
	int a = abs(yv - p[idx].second.first);
	int b = abs(yv - p[idx].second.second);

	if (a != b)
	{
		m = min(a, b);

		if (m == a)
			y = p[idx].second.first;
		else if (m == b)
			y = p[idx].second.second;

		dfs(idx + 1, p[idx].first, y, s + m);
	}
	else
	{
		m = min(a, b);

		dfs(idx + 1, p[idx].first, p[idx].second.first, s + m);
		dfs(idx + 1, p[idx].first, p[idx].second.second, s + m);
	}
}

int main()
{
	
	

	cin >> n >> sy >> ex;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> yl >> yh;

		p[i].first = x;
		p[i].second.first = yl;
		p[i].second.second = yh;
	}
	
	sort(p, p + n);

	dfs(0, 0, sy, 0);

	cout << sum << endl;


	return 0;
}