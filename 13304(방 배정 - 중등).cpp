#include <iostream>
using namespace std;

int main()
{
	int n, k, s, y;						//n = ���п��࿡ �����ϴ� �л� ��, k = �� �濡 ������ �� �ִ� �ִ� �ο���, s = ����, y = �г�
	double arr[2][7] = { 0, };			//arr[����][�г�] -> �г��� ��� 1~6�г��̹Ƿ� 7�� ����!
	double sum[5] = { 0, };				//���� ������ ������ �� �ִ� �л����� ��
	int cnt = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> s >> y;

		arr[s][y]++;					//��޵� ���� & �г⿡ 1 ����

	}

	for (int i = 0; i <= 1; i++)		//3~6�г��� ���� ���� ���ϴ� ��
	{
		for (int j = 3; j <= 5; j += 2)
		{
			cnt += (arr[i][j] + arr[i][j + 1] + k - 1) / k;
		}
	}

	cnt += (arr[0][1] + arr[0][2] + arr[1][1] + arr[1][2] + k - 1) / k;		//1~2�г��� ���� ���� ���ϴ� ��

	cout << cnt << endl;


	return 0;
}