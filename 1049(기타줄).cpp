#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;                  //n : ������ ��Ÿ���� ����, m : ��Ÿ�� �귣��
	int a, b;                  //a : ��Ű�� ����, b : ������ ����
	int mina = 1001, minb = 1001;   //a,b,�� �ּڰ�
	int ans = 0;

	cin >> n >> m;

	while (m--)
	{
		cin >> a >> b;

		mina = min(a, mina);
		minb = min(b, minb);
	}

	if (mina == 0 || minb == 0)
		ans = 0;
	else if (n <= 6)                  //n�� �� ��Ű�� ����(6��) ������ ���
	{
		ans += min(mina, minb*n);
	}
	else                     //n�� �� ��Ű�� ����(6��) �ʰ��� ���
	{
		ans += min(minb*n, (n / 6) * mina + min(mina, minb * (n % 6)));   //min(1�� ���� * n, ��Ű�� + ����)
	}

	cout << ans << endl;

	return 0;
}