#include <iostream>
using namespace std;

int main()
{
	int n, k;							//n = �л� ��, k = �� �濡 ������ �� �ִ� �ִ� �ο� ��
	int arr[2][7] = { 0, };				//arr[����][�г�] : ������ �г⿡ �´� �л� ��
	int s, y;							//s = ����, y = �г�
	int cnt = 0;						//�ʿ��� �ּ� ���� ��

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> s >> y;

		arr[s][y]++;					//������ �г⿡ �´� �л� ���� 1 ����
	}

	cnt += (arr[0][1] + arr[0][2] + arr[1][1] + arr[1][2] + k - 1) / k;		//1~2�г���� ���� ��

	for (int i = 0; i <= 1; i++)
	{
		for (int j = 3; j < 6; j += 2)										//3~4�г�, 5~6�г��� ���� ������ �°� ���ϱ� ���� 2�� ����
		{
			cnt += (arr[i][j] + arr[i][j+1] + k - 1) / k;
		}
	}

	cout << cnt << endl;

	return 0;
}