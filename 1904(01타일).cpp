#include <iostream>
using namespace std;
//피보나치수열 문제

int main()
{
	long long arr[1000001];
	int n;								//이진법의 자릿수

	cin >> n;

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;

	cout << arr[n]<<endl;

	return 0;
}
