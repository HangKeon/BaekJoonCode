#include <iostream>
using namespace std;

int main()
{
	int arr[201];						//�Է��� ���� ����
	int dp[201];						//�� �ٲ�� �����Ǵ� ���� �ִ� ������ ����
	int n, ans = 0;						//n = �Է��� ���� ����, ans

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	dp[0] = 1;

	for (int i = 1; i < n; i++)
	{
		dp[i] = 1;

		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
	}

	for (int i = 1; i < n; i++)
		if (ans < dp[i])
			ans = dp[i];

	cout << n - ans << endl;



	return 0;
}