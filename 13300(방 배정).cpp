#include <iostream>
using namespace std;

int main()
{
	int n, k;							//n = �����ϴ� �л� ��, k = �� �濡 ������ �� �ִ� �ִ� �ο� ��
	int arr[2][7] = { 0, };				//arr[����][�г�] : ������ �г⿡ �´� �л� ��
	int s, y;							//s = ����, y = �г�
	int cnt = 0;						//�ʿ��� ���� ��

	cin >> n >> k;


	for (int i = 0; i < n; i++)
	{
		cin >> s >> y;

		arr[s][y]++;					//�Է��� ������ �г⿡ �´� �л� ���� 1 ����
	}

	for (int i = 0; i <= 1; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cnt += (arr[i][j] + k - 1) / k;	//�� arr[i][j]���� (k-1)�� ���ؾ� ���� ������ �´´�.
		}
	}

	cout << cnt << endl;

	return 0;
}