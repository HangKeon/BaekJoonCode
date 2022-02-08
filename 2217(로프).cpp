#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;								//������ ����
	long long sum = 0;					//��ü�� �ִ� �߷�
	long long arr[100001];				//������ ��ƿ �� �ִ� ����

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
	{
		sum = max(sum, arr[i] * (n - i));
	}

	cout << sum << endl;

	return 0;
}