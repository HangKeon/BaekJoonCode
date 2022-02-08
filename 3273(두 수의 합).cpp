#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;							//������ ũ��
	int x;							//���ؾ� �ϴ� ��
	int left, right;				//left : �ε��� ���� ���ʰ�, right : �ε��� ���� ������ ��
	int cnt = 0;					//x���� �����ϴ� ������ ����
	int sum;						//arr[left]+arr[right]
	int arr[100001];				//����

	cin >> n;

	left = 0;
	right = n - 1;

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	cin >> x;

	sort(arr, arr + n);

	while (left < right)			//arr[left] == arr[right]�� ��� sum == x�� �� �ִ�.
	{
		sum = arr[left] + arr[right];

		if (sum < x)
			left++;
		else if (sum > x)
			right--;
		else
		{
			cnt++;
			left++;
			right--;
		}
	}

	cout << cnt << endl;

	return 0;
}