#include <iostream>
using namespace std;

int fac(int n)				//���丮�� ����Լ�
{
	if (n <= 1)
		return 1;

	return n * fac(n - 1);
}

int main()
{
	int n;					//���丮�� ���۰�
	int ans;				//���丮�� �Լ��� �����ϴ� ����

	cin >> n;

	ans = fac(n);

	cout << ans << endl;

	return 0;
}