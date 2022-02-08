#include <iostream>
using namespace std;

int dp[41] = { 1,1 };         //dp[n]= k -> n���� �¼��� ���� �� ���� �� �ִ� k������ ���
int arr[41];               //�������� ��ȣ

int main()
{
	int n;                  //�¼��� ����
	int m;                  //�������� ����
	int cnt;               //vip�� ������ �������� ����
	int ans = 1;            //�־��� ������ �����ϴ� ������

	cin >> n >> m;

	for (int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	for (int i = 1; i <= m; i++)
		cin >> arr[i];

	for (int i = 1; i <= m + 1; i++)
	{
		if (i <= m)
			cnt = arr[i] - arr[i - 1] - 1;
		else
			cnt = n - arr[i - 1];

		ans *= dp[cnt];
	}

	cout << ans << endl;

	return 0;
}