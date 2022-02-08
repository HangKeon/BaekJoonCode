#include <iostream>
using namespace std;

int main()
{
	int n;							//�Է��� ������ ���� 
	int Max = 0;					//���� �� �����ϴ� �κ� ������ ����
	int arr[1001];					//�Է��ϴ� ����
	int dp[1001] = { 0, };			//dp[i] : arr[i]�� ������ ���� ���ڵ��� ���� + 1(�ڱ��ڽ�)

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;					//�ڱ��ڽ�

		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
				if (dp[i] < dp[j] + 1)
					dp[i] = dp[j] + 1;
		}

		if (Max < dp[i])
			Max = dp[i];
	}

	cout << Max << endl;

	return 0;
}