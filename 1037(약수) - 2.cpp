#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;						//����� ���� 
	int arr[51];				//n�� ��¥ ���

	cin >> a;

	for (int i = 0; i < a; i++)
		cin >> arr[i];

	sort(arr, arr + a);

	cout << arr[0] * arr[a - 1] << endl;

	return 0;
}