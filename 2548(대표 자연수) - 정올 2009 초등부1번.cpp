#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;							//�ڿ����� ����
	int arr[20001];					//�Է��� �ڿ���
	int sum = 2e9;					//������ ������ ��
	int temp = 0;					//������ ������ ���� �ӽ� ����
	int ans;						//sum�� ������ ���� ��

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);				//sum�� ���� ��� ���� ���� ans�� ����ǵ��� ����

	for (int i = 0; i < n; i++)
	{
		temp = 0;

		for (int j = 0; j < n; j++)
		{
			temp += abs(arr[i] - arr[j]);
		}

		if (sum > temp)
		{
			sum = temp;
			ans = arr[i];
		}
	}

	cout << ans << endl;


	return 0;
}