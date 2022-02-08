#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int r, c;						//r : ����(��), c: ����(��)
int cnt;						//���� ���� �� �ִ� �ִ� ĭ ����
int ans = -1;					//cnt�� ���Ͽ� ���� ū ���� ����
string arr[21];
int alp[26];					//���ĺ��� ���ڷ� ������ �迭
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int x, int y)
{
	int ax, ay;

	alp[arr[x][y] - 'A'] = 1;		//���ĺ� ��� ó��
	cnt++;

	ans = max(cnt, ans);

	for (int i = 0; i < 4; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];

		if ((ax >= 0 && ax < r) && (ay >= 0 && ay < c))
		{
			if (!alp[arr[ax][ay] - 'A'])
			{
				dfs(ax, ay);
				alp[arr[ax][ay] - 'A'] = 0;				//���Ӱ� ���� ���� ��� �湮 �� �� ������ ó��!
				cnt--;									//�湮 �� �� ������ ó�� -> Ƚ���� 1 ����!
			}
		}
	}
}

int main()
{

	cin >> r >> c;

	for (int i = 0; i < r; i++)
		cin >> arr[i];

	dfs(0, 0);

	cout << ans << endl;

	return 0;
}