#include <iostream>
using namespace std;

int main()
{
	int n;						//ĭ�� ��
	int a = 1;

	cin >> n;

	while (a * 2 <= n)			//2�� �ŵ�����
	{
		a *= 2;
	}

	cout << a << endl;

	return 0;
}