#include <iostream>
using namespace std;

int main()
{
	int k;						//���� ���� �ʰ� �� �� �ִ� �ִ�Ÿ�
	int n;						//����� ����
	long long arr[101];			//������ ����� ���� �Ÿ�
	long long arr2[101];		//����� �� ���� �ð�
	long long sum[101] = { 0, };			//�Ÿ� ������
	int A[101], B[101];

	cin >> k >> n;

	for (int i = 1; i <= n + 1; i++)
	{
		cin >> arr[i];

		sum[i] = sum[i - 1] + arr[i];
	}

	for (int i = 1; i <= n; i++)
	{
		cin >> arr2[i];

		if (sum[i] <= k)					//���� �Ÿ� �� <= ������� �ʰ� ������ �� �ִ� �ִ� �Ÿ�
			A[i] = arr2[i];
	}

	for (int i = 1; i <= n + 1; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if(sum[i]-sum[j]<=k)
		}
	}
	


	return 0;
}