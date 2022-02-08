#include <iostream>
using namespace std;

int main()
{
	int n, m, k;					//n : ��, m : ��, k : o�� ǥ�õ� ĭ�� ��ȣ
	int arr[16][16] = { 0, };		//������ ��ġ�� �ִ� ���� ����
	int midx, midy;					//k!=0�� ��� k�� ��ǥ�� ������ ����
	int value;						//k!=0�� ��� k������ ����� ������ ������ ����
	arr[0][1] = 1;					//arr[0][1]�̳� arr[1][0]�� 1�� �ʱ�ȭ�� �ʿ��ϴ�.

	cin >> n >> m >> k;

	if (k != 0)						//k�� 0�� �ƴ� ��� -> ��򰡸� �� �� ���ľ� �ϴ� ���
	{
		midx = k / m + (k%m > 0 ? 1 : 0);

		if (k%m == 0)
			midy = m;
		else
			midy = k % m;

		for (int i = 0; i <= midx; i++)
			for (int j = 0; j <= midy; j++)
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];

		value = arr[midx][midy];

		arr[midx][midy] = 1;		//�ٽ� ���⼭���� ���� �����ϱ� ���� 1�� �ʱ�ȭ

		for (int i = midx; i <= n; i++)
			for (int j = midy; j <= m; j++)
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];

		value *= arr[n][m];			//���� ����� ���� value�� ����
	}
	else							//k�� 0�� ��� -> ��򰡸� ��ġ�� �ʴ� ���
	{
		for (int i = 0; i <= n; i++)
			for (int j = 0; j <= m; j++)
				arr[i][j] = arr[i][j - 1] + arr[i - 1][j];

		value = arr[n][m];			//���� ����� ���� value�� ����

	}

	cout << value << endl;

	return 0;
}