#include <iostream>
using namespace std;

int main()
{
	int n, len1[81], len2[81];					//n : Ÿ���� ����, len1 : ª�� ���� ����, len2 : �� ���� ����

	cin >> n;

	len1[1] = 1;
	len1[2] = 1;
	len2[1] = 1;
	len2[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		len1[i] = len1[i - 1] + len1[i - 2];
		len2[i] = len1[i] + len1[i - 1];
	}

	cout << len1[n] << ' ' << len2[n] << endl;
	
	return 0;
}