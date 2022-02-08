#include <iostream>
using namespace std;

int n, m;				//�������� ũ��
int arr[101][101];		//������ -> 1 : ġ� o, 0 : ġ� x
const int DX[4] = { -1,1,0,0 }, DY[4] = { 0,0,-1,1 };

int allMelted() 
{
	int i, j, count = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr[i][j] == 1 || arr[i][j] == 2) {
				arr[i][j] = 1;
				count++;
			}
			else arr[i][j] = 0;
		}
	}
	return count;
}


void dfs(int x,int y)
{
	int i, ax, ay;
	arr[x][y] = -1;				//arr[x][y]�� ������ 0�̹Ƿ� -1�� �ٲ۴�.

	for (i = 0; i < 4; i++) 
	{
		ax = x + DX[i]; 
		ay = y + DY[i];

		if ((0 <= ax && ax < n) && (0 <= ay && ay < m)) 
		{
			if (arr[ax][ay] > 0) 
				arr[ax][ay]++;
			else if (arr[ax][ay] == 0) 
				dfs(ax, ay);
		}
	}

}


int main()
{
	int k;						//�ɸ��� �ð�
	

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (k = 0; allMelted(); k++)		//allMelted�� 0�� �Ǵ� ������ k���� �ɸ��� �ð�!
		dfs(0, 0);

	cout << k << endl;


	return 0;
}