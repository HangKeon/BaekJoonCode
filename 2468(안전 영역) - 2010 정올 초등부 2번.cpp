#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n;							//��� ���� ����
int arr[101][101];				//� ������ ���̸� ��Ÿ���� �迭
int visited[101][101];			//�湮 ���θ� Ȯ��!
int dx[] = { 0,0,1,-1 };		//�����ϻ�
int dy[] = { 1,-1,0,0 };


void dfs(int x,int y, int h)	//dfs(x��, y��, ���� ����)
{
	int ax, ay;					//�ε��� x,y�� �������� dx,dy��ŭ ������ �ε��� ��

	visited[x][y] = 1;			//dfs�� ����� ���� ������ arr > h�̹Ƿ� 1�� �ٲ��ش�.

	for (int i = 0; i < 4; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];

		if ((ax >= 0 && ax < n) && (ay >= 0 && ay < n))		//���� : 0 <= ax < n, 0 <= ay < n
		{
			if (arr[ax][ay] > h && !visited[ax][ay])	//���� �� ���鼭 �湮�� ���ߴٸ�
			{
				dfs(ax, ay, h);
			}
		}
	}
}

int main()
{
	int Max = 0, Min = 101;			//Max : arr�� �ִ� ����, Min : arr�� �ּ� ����
	int cnt = 0;				//������ ������ ���� -> ���� �� ���� ������ ���� ���� ���������� 1�̴�.
	int cmp = 1;				//Min ~ Max ������ ���� ������ �ִ� ������ ���� ��

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			Max = max(Max, arr[i][j]);
			Min = min(Min, arr[i][j]);
		}

	for (int i = Min; i < Max; i++)
	{
		memset(visited, 0, sizeof(visited));
		cnt = 0;

		for (int a = 0; a < n; a++)
		{
			for (int b = 0; b < n; b++)
			{
				if (arr[a][b] > i && !visited[a][b])	//���� �����̸鼭 �湮���� ���� ���
				{
					dfs(a, b, i);
					cnt++;
				}
			}
		}
		
		cmp = max(cmp, cnt);
	}

	cout << cmp << endl;



	return 0;
}