#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;					//n : ��ü ���� ����, k : ������ ���� ����
	int sum = 0;				//arr�� k���� ��
	int arr[5001];

	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n, greater<int>());

	for (int i = 0; i < k; i++)
		sum += arr[i] - i;

	cout << sum << endl;

	return 0;
}