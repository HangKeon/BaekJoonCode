#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;						//������ ����
	int ans = 0;				//�Է� �������� ���� �� �ִ� ������ �ִ� ����
	int arr[1001];				//������ ũ��
	int dp[1001] = { 1, 0 };	//�� ���ڿ� ���� �� �ִ� �ִ� ������ ����(�ڱ� �ڽ� ����)

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j])			//���� ���� ũ��(arr[j])���� ���� ���� ũ��(arr[i])�� ũ�ٸ�
				dp[i] = max(dp[i], dp[j]);

		dp[i]++;							//���� �ѿ� �ִ� ������ ������ ����!

		ans = max(ans, dp[i]);
	}
	
	cout << ans << endl;

	return 0;
}