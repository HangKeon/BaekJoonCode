#include <iostream>
#include <vector>
using namespace std;

int n, m;						//n : ���Ǽ�, m : ������ ��
int a, b;						//���� �ٸ� ���� ��ȣ
vector<int> v[300001];			//������ ����� ���� �ٸ� �� ���� ��ȣ�� ������ �迭
vector<int> v2[300001];
int visited[300001];
int fu[300001];					//full : i�� ��Ʈ�� �ϴ� ����Ʈ���� ������ ���Ե� back edge ����
int su[300001];					//sub : i�� ��Ʈ�� �ϴ� ����Ʈ���� �����̶� ���Ե� back edge ����
int ab[300001];					//absolute : i�� �θ�� ����� back edge ����


void dfs(int x, int y)			//dfs(���� ���, ���� ���)
{
	for (auto i : v[x])
	{
		if (i == y)								//��� �湮�� ����� ��� -> �ǳʶ�
			continue;

		if (!visited[i])						//tree edge
		{
			v2[x].push_back(i);
			visited[i] = visited[x] + 1;
			int t = fu[x];

			dfs(i, x);

			ab[i] = fu[x] - t;

			fu[x] += fu[i];
			su[x] += su[i];
		}
		else if (visited[i] < visited[x])		//back edge -> ����Ŭ �߻�
		{
			fu[i]++;
			su[x]++;
		}
	}
}

int main()
{
	long long ans = 0;

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	visited[1] = 1;
	dfs(1, -1);

	for (int i = 1; i <= n; i++)
	{
		int t = 1;

		for (auto j : v2[i])
		{
			//i�� �θ𺸴� ���� �̾����� ������ 2�� �̻��� ��� ������ �����ϸ� tree edge�� back edge ��� ������
			//fu[j]�� 0�� �ƴ϶�� ����Ʈ�� ���ο� ����Ŭ ����
			if (su[j] - ab[j] > 1 || fu[j])
				t = 0;
		}

		//0�� �ƴ϶�� i�� ������ �� �ϴ� ���� back edge�� ����
		if (m - n + 1 - su[i])
			t = 0;

		if (t)
			ans += i;
	}

	cout << ans << endl;

	return 0;
}