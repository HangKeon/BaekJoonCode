#include <iostream>
using namespace std;

int main()
{
	int n, k;							//n = �л� ��, k = ��Ƽ�� ��
	int a[101];							//��Ƽ�� ���� ��

	cin >> n >> k;

	for (int i = k - 1; i >= 0; i--)
	{
		cin >> a[i];
		n -= (a[i] + 1) / 2;
	}

	if (n < 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}