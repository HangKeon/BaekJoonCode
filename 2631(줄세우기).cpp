#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;						//���̵��� ��
	int ans = 0;				//�ִ� LIS�� ũ��
	int arr[201];				//���̵��� ��ȣ
	int dp[201];				//LIS�� ������ ����

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;						//�ڱ� �ڽ��� ������ ����

		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}

		ans = max(ans, dp[i]);
	}

	cout << n - ans << endl;

	return 0;
}