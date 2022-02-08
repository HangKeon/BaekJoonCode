#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long 

int main()
{
	int t, k = 0, m = 0;
	int *v;

	cin >> t;
	v = new int[t];
	k = t;												//�Ʒ� ����� ���� k�� t�� ����

	while (t--)											//���μ����ظ� �̿��ϴ� ��
	{
		int n;
		cin >> n;

		ll cnt2 = 0, cnt5 = 0;							//cnt2 = 2�� �������� ���� ��, cnt5 = 5�� �������� ���� ��

		for (int i = 2; i <= n; i *= 2)					//2�� ���� ���
		{
			cnt2 += n / i;
		}

		for (int i = 5; i <= n; i *= 5)					//5�� ���� ���
		{
			cnt5 += n / i;
		}

		v[m++] = min(cnt2, cnt5);						//cnt2�� cnt5 �� ���� ���� �ִ´�.

	}

	for (int i = 0; i <k; i++)
		cout << v[i] << endl;

	return 0;
}


