#include <iostream>
using namespace std;

int main()
{
	int n;								//�׸��� �� ����
	int tmp;							//�׸� ����� �Է¹޴� ����
	int a[5] = { 0, };					//���� �׸��� ������ �迭(1~4)

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;

		a[tmp]++;						//�Էµ� ������ �׸� ���(tmp)�� �迭a�� ������ ����!
	}

	for (int i = 4; i >= 1; i--)
		cout << a[i] << ' ';

	cout << endl;


	return 0;
}