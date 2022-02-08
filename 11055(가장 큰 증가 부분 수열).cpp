#include <iostream>
using namespace std;

int main()
{
	int n;						//�Է��ϴ� ������ ����
	int max = 0;				//dp�� ���� ū ��
	int arr[1001];				//�Է��ϴ� ����
	int dp[1001];				//dp[i] : arr[i]���� �����ϴ� �κ� ������ �� �� ���� ū ��(�ڱ� �ڽ� ����)

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = arr[i];			//�ڱ� �ڽ��� ���� ����

		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j])
				if (dp[i] < dp[j] + arr[i])
					dp[i] = dp[j] + arr[i];

		if (max < dp[i])
			max = dp[i];
	}

	cout << max << endl;

	return 0;
}