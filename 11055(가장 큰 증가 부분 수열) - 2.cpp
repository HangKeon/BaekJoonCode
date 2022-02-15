#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;							//������ ũ��
	int ans = 0;					//LIS�� �ִ� ����
	int arr[1001];					//����
	int dp[1001];					//LIS�� ����

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = arr[i];					//�ڱ� �ڽ��� �� 

		for (int j = 0; j < i; j++)
			if (arr[j] < arr[i] && dp[i] < dp[j] + arr[i])
				dp[i] = dp[j] + arr[i];

		ans = max(ans, dp[i]);
	}

	cout << ans << endl;

	return 0;
}