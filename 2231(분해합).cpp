#include <iostream>
using namespace std;

int main()
{
	int n;							//n�� �����ڸ� ���ض�.
	int sw = 0;						//sw=0�� �״�θ� �����ڰ� ���� ���

	cin >> n;

	for (int i = 1; i < n; i++)
	{
		int temp = i;
		int num = i;

		while (temp != 0) 
		{
			num += temp % 10;
			temp /= 10;
		}

		if (num == n)
		{
			cout << i << endl;
			sw = 1;
			break;
		}
	}

	if (!sw)
		cout << 0 << endl;

	return 0;
}