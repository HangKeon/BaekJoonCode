#include <iostream>
using namespace std;
//�Ǻ���ġ���� ����

int main()
{
	long long arr[1000001];
	int n;								//�������� �ڸ���

	cin >> n;

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;

	cout << arr[n]<<endl;

	return 0;
}
