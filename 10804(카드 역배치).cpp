#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[21];					//1~20���� ����� �迭
	int a, b;						//a : ���� �κ�, b : �� �κ�

	for (int i = 1; i <= 20; i++)
		arr[i] = i;

	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;

		reverse(arr + a, arr + b + 1);
	}

	for (int i = 1; i <= 20; i++)
		cout << arr[i] << ' ';
	cout << endl;

	return 0;
}