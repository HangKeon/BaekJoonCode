#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int> > v[100001];		//����� (�������� ��ȣ, ���� ũ��)�� �����ϴ� �迭
int check[100001];						//�湮�� ���� 1��, �湮���� �ʾҴٸ� 0�� ����
int ans;								//(������ �� �� - ���� �� ���� �� ��)�� ������ �迭
int n, x, y;							//n = ������ ���� ����, x,y = �� �κ��� ��ġ�� ���� ��ȣ

void dfs(int now, int cost, int mcost)	//dfs(���� ���, �� ���� ������ ��, ���� �� ���� ����)
{
	check[now] = 1;						//���� ���(now)�� ���� �� �湮�����Ƿ� 1�� ����

	if (now == y)						//Ż������ -> �� ��(end)�� ������ ���
	{
		ans = cost - mcost;
		return;
	}

	for (auto i : v[now])
	{
		if (!check[i.first])				//���� ���� ���(now)�� ����� ���� ���(i.first)�� ���� �湮���� �ʾҴٸ�
		{
			dfs(i.first, cost + i.second, max(mcost, i.second));
		}
	}
}

int main()
{
	int start, end, len;				//start,end = �� ���� ��ġ�� ���� ��ȣ, len = ����� ����

	cin >> n >> x >> y;

	for (int i = 1; i < n; i++)
	{
		cin >> start >> end >> len;

		v[start].push_back({ end,len });	//�� �� start,end�� ������ ���� len��ŭ ����Ǿ� ������ �˷��ִ� �迭
		v[end].push_back({ start,len });
	}

	dfs(x, 0, 0);							//dfs(���� ���, ���� ���� = 0, ���� �� ���� ���� -> ó���� ���� ���� ������ ����)

	cout << ans << endl;

	return 0;
}