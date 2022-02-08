#include <iostream>
using namespace std;

int n;								//n : �κ� �̵� Ƚ��
double result;
double arr[4];						//�������� Ȯ���� ������ �迭
int visited[30][30];				//�湮o : 1, �湮x : 0
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };


void dfs(int x, int y, double r)		//dfs(��, ��, ���� ���� Ȯ��)
{
	int ax, ay;

	if (n == 0)							//Ż������
	{
		result += r;
		return;
	}

	visited[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];

		if (!visited[ax][ay])
		{
			n--;

			dfs(ax, ay, r*arr[i]);

			//�ٸ� ������ Ž���ϱ� ���� �� ���⿡�� ��Ҵ� ĭ��
			//�ٽ� ���� ���� ĭ���� ǥ��!
			n++;
			visited[ax][ay] = 0;
		}
	}
}

int main()
{
	int a;

	cin >> n;

	for (int i = 0; i < 4; i++)
	{
		cin >> a;
		arr[i] = a * 0.01;
	}

	dfs(15, 15, 1.0);

	cout.precision(10);
	cout << fixed << result << endl;

	return 0;
}