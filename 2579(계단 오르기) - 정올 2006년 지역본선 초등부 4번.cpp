#include <iostream>
#include <algorithm>
using namespace std;

int dp[301];               //dp[n] : n�� °������ ��� ���� ���� �ִ�
int arr[301];               //����� ���� �����ϴ� �迭

int main()
{
	int n;                  //����� ����

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	//��ȭ���� ������ �ʴ� �κ�
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

	//��ȭ��
	for (int i = 4; i <= n; i++)
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);

	cout << dp[n] << endl;

	return 0;
}