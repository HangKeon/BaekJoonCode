#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;							//����� ��
	int arr[100001];				//���
	int arr2[100001];				//arr�� �������� ���� -> ũ�� ����
	int sum[100001];				//������
	int ans = 0;					//�ִ��� ���� ��

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		arr2[i] = arr[i];

		if (i == 0)
			sum[i] = arr[i];
		else
			sum[i] = sum[i - 1] + arr[i];
	}

	sort(arr2, arr2 + n);					//��������


	for (int i = 0; i < n; i++)
	{
		if (i >= 1 && i <= n - 2)			//������ �� ���̿� �ִ� ���
		{
			if (arr2[n - 1] == arr[i])		//������ ���� ū ��
			{
				ans = max(ans, sum[n - 2] - sum[0] + arr[i]);
			}
		}
	}

	int b = n - 1;
	int a = n - 2;
	int i = 0;

	while (i < a)			//������ ���ʿ� �ִ� ���
	{
		ans = max(sum[b - 1] - sum[i] + arr[i] - arr[a] + sum[a - 1] - sum[i] + arr[i], ans);
		a--;
	}

	int c = 0;
	int d = 1;

	i = n - 1;

	while (d < i)			//������ �����ʿ� �ִ� ���
	{
		ans = max(ans, sum[i] - sum[d] + sum[i] - sum[c] - arr[d]);
		d++;
	}

	cout << ans << endl;

	return 0;
}