#include <iostream>
using namespace std;

int main()
{
	int n;								//1~n ������ �� �� 3,6,9�� ã�� ���� ����
	int arr[1000001];					//1~n������ ���� ������ �迭
	int cnt = 0;						//3,6,9�� ������ ���� ����

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;

		int temp = arr[i];				//�ӽ÷� arr�� ����
		int len = 0;					//arr�� �ڸ����� ���� ����

		while (temp != 0)
		{
			temp /= 10;
			len++;
		}

		temp = arr[i];					//�ٽ� temp�� arr�� ����

		for (int j = 0; j < len; j++)
		{
			if (temp % 10 == 3 || temp % 10 == 6 || temp % 10 == 9)
				cnt++;

			temp /= 10;

		}
	}


	cout << cnt << endl;

	return 0;
}