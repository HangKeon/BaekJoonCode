#include <iostream>
using namespace std;

int main()
{
	int n, m;							//n = ����� ����, m = ������ ����
	int h[1001], a[1001];				//h = ����� ����, m = ������ ����
	int sum = 0, max_h = 0, max_a = 0;	//sum = ��, max_h = ��� ���� �ִ밪, max_a = ���� ���� �ִ밪

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> h[i];

		if (h[i] > max_h)
			max_h = h[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a[i];

		if (a[i] > max_a)
			max_a = a[i];
	}

	sum = max_h + max_a;

	cout << sum << endl;

	return 0;
}