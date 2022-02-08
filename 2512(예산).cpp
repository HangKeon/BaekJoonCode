#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;						//������ ��
	int m;						//�� ����
	int low = 0;				//���� �� �ִ� ���� �� ���� ���� ��
	int high = 0;				//high : arr �� ���� ū �� 
	int mid;					//�߰���
	int ans;					//������ ����� �� �ִ�
	int arr[10001];				//�� ������ �����û

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		high = max(high, arr[i]);
	}

	cin >> m;
	
	while (low <= high)							//�̺�Ž��
	{
		mid = (low + high) / 2;

		int sum = 0;							//min(arr,mid)�� ������ -> m����!

		for (int i = 0; i < n; i++)
			sum += min(arr[i], mid);

		if (sum <= m)
		{
			ans = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}

	cout << ans << endl;

	return 0;
}