#include <iostream>
using namespace std;

int main()
{
	int N;												//N = ��ģ���� �ڸ� ��
	long long int arr[91];								//N = 47�� �� int ���� �ʰ�! ���� long long int �� ���!

	cin >> N;

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= N; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	cout << arr[N] << endl;

	return 0;
}

//��	->	����� �˸� ��