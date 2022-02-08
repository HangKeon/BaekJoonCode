#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int m, n, k;					//m : ���� , n : ����,  k : ���簢���� ����
int cnt;						//���簢���� ����
vector<int> r;					//���簢���� ������ ������ �迭
int arr[101][101];				//������ ũ��
int visited[101][101];			//�湮o : 1, �湮x : 0
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y)
{
	int ax, ay;

	visited[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];

		if ((ax >= 0 && ax < m) && (ay >= 0 && ay < n))
		{
			if (arr[ax][ay] == 0 && !visited[ax][ay])
			{
				dfs(ax, ay);
			}
		}
	}
	cnt++;
}

int main()
{
	int x1, y1, x2, y2;

	cin >> m >> n >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		for (int a = x1; a < x2; a++)				//���簢���� �κ��� ���� 1�� �ٲٱ�
			for (int b = y1; b < y2; b++)
				arr[b][a] = 1;						//���� : ��ǥ�� �־������Ƿ� �迭 ��޽� �ݴ��!!
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0 && !visited[i][j])
			{
				dfs(i, j);

				r.push_back(cnt);
				cnt = 0;
			}
		}
	}

	sort(r.begin(), r.end());

	cout << r.size() << endl;

	for (int i = 0; i < r.size(); i++)
		cout << r[i] << ' ';

	return 0;
}