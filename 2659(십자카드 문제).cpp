#include <iostream>
#include <algorithm>
using namespace std;

int solve(int x)         //4�ڸ� �� �� ���� ���� �� ã��
{
	int temp = x;

	for (int i = 0; i < 3; i++)
	{
		x = x % 1000 * 10 + x / 1000;

		if (temp > x)
			temp = x;
	}

	return temp;
}

int main()
{
	int cnt = 0;            //�ð�� ���� ���ڵ��� ����
	int clock;               //�ð��
	int arr[5];               //�Է��ϴ� ����

	for (int i = 0; i < 4; i++)
		cin >> arr[i];

	clock = solve(arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3]);

	for (int i = 1111; i <= clock; i++)
		if (solve(i) == i)
			cnt++;

	cout << cnt << endl;

	return 0;
}