#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int n;						//������ ����
int sw = 0;					//R = 1, G = 2, B = 3
string s[101];				//RGB�� �Է��� ����
int visited[101][101];		//�湮 o : 1, �湮 x : 0
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

		if ((ax >= 0 && ax < n) && (ay >= 0 && ay < n))
		{
			if (s[ax][ay] == 'R' && !visited[ax][ay] && sw == 1)
			{
				dfs(ax, ay);
			}
			else if (s[ax][ay] == 'G' && !visited[ax][ay] && sw == 2)
			{
				dfs(ax, ay);
			}
			else if (s[ax][ay] == 'B' && !visited[ax][ay] && sw == 3)
			{
				dfs(ax, ay);
			}
		}
	}
}


int main()
{
	int cnt = 0;				//rgb�� ����
	int cnt2 = 0;				//���ϻ����� ����

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i][j] == 'R' && !visited[i][j])
			{
				sw = 1;
				dfs(i, j);
				cnt++;
			}
			else if (s[i][j] == 'G' && !visited[i][j])
			{
				sw = 2;
				dfs(i, j);
				cnt++;
			}
			else if (s[i][j] == 'B' && !visited[i][j])
			{
				sw = 3;
				dfs(i, j);
				cnt++;
			}
		}
	}

	memset(visited, 0, sizeof(visited));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i][j] == 'G')
			{
				s[i][j] = 'R';
			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (s[i][j] == 'R' && !visited[i][j])
			{
				sw = 1;
				dfs(i, j);
				cnt2++;
			}
			else if (s[i][j] == 'B' && !visited[i][j])
			{
				sw = 3;
				dfs(i, j);
				cnt2++;
			}
		}
	}

	cout << cnt << ' ' << cnt2 << endl;

	return 0;
}