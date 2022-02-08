#include <iostream>
#include <string>
using namespace std;

int r, c;							//��, ��
int ans;							//������������ �ִ� ����
int flag;							//���� ������ ���� ���� ���� -> ���� : 1, ����x : 0
string arr[10001];
int visited[10001][501];
int dx[] = { -1,0,1 };
int dy[] = { 1,1,1 };

void dfs(int x, int y)
{
	int ax, ay;

	visited[x][y] = 1;

	if (y == c - 1)					//Ż������ -> ���� ������ ���� ������ ���
	{
		flag = 1;
		ans++;
		return;
	}


	for (int i = 0; i < 3; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];

		if ((ax >= 0 && ax < r) && (ay >= 0 && ay < c))
		{
			if (arr[ax][ay] == '.' && !visited[ax][ay])
			{
				dfs(ax, ay);

				if (flag)
					return;
			}
		}
	}
}

int main()
{
	cin >> r >> c;

	for (int i = 0; i < r; i++)
		cin >> arr[i];

	for (int i = 0; i < r; i++)				//���� ���� �������� ����!
	{
		flag = 0;

		dfs(i, 0);

	}

	cout << ans << endl;


	return 0;
}