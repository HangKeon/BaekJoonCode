#include <iostream>
#include <algorithm>
#include<queue>
#include <utility>
#include <cstring>
using namespace std;

int n, m;					//����, ����
int ans = 0;				//���� ������ �ִ� ����
int arr[9][9];				//0 : ��ĭ, 1 : ��, 2 : ���̷���
int arr2[9][9];				//arr�� ���� ������ �迭 -> �̰ɷ� ���� ����� �ùķ��̼��� ��
int dx[] = { 1,-1,0,0 };
int dy[] = { 10,0,1,-1 };


void bfs()						//���̷����� �۶߸��� ���� -> ���� 3�� ���� ����!
{
	int arr3[9][9];
	int ax, ay;

	memcpy(arr3, arr2, sizeof(arr2));

	queue<pair<int, int> > q;

	for (int i = 0; i < n; i++)				//���̷����� �߰��ϸ� �� �ε����� q�� ����!
		for (int j = 0; j < m; j++)
			if (arr3[i][j] == 2)
				q.push(make_pair(i, j));

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			ax = x + dx[i];
			ay = y + dy[i];

			if ((ax >= 0 && ax < n) && (ay >= 0 && ay < m))
			{
				if (arr3[ax][ay] == 0)
				{
					arr3[ax][ay] = 2;
					q.push(make_pair(ax, ay));		//2�� �߰��Ǹ� �ٽ� q�� �߰�!
				}
			}
		}
	}

	int cnt = 0;					//���������� ����

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (arr3[i][j] == 0)
				cnt++;

	ans = max(ans, cnt);
}

void dfs(int cnt)				//dfs(���� ���� Ƚ��)
{
	if (cnt == 3)				//Ż������
	{
		bfs();
		return;
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr2[i][j] == 0)
			{
				arr2[i][j] = 1;
				dfs(cnt + 1);
				arr2[i][j] = 0;
			}
		}
	}


}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0)						//arr�� ��ĭ�� ���
			{
				memcpy(arr2, arr, sizeof(arr));
				arr2[i][j] = 1;
				dfs(1);
				arr2[i][j] = 0;
			}
		}
	}

	cout << ans << endl;


	return 0;
}