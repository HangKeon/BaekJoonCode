#include <iostream>
using namespace std;

const int possible = 20170805;
int city_map[501][501];

int main()
{
	int m, n;														//������ m x n�� ��ǥ������� ǥ��!

	cin >> m >> n;
   
	for (int i = 1; i <= m; i++)										//city_map�� 0,1,2�� ä�� �ֱ�!
		for (int j = 1; j <= n; j++)
			cin >> city_map[i - 1][j - 1];

	city_map[1][1] = 0;												//������� �������� city_map[i][j]=0�̶�� ����!
	city_map[m - 1][n - 1] = 0;




	return 0;
}