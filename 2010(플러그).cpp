#include <iostream>
using namespace std;

int main()
{
	int n, value;							//n = ��Ƽ�� ����, value = �� ��Ƽ���� �÷��� ����
	int sum = 0;							//��Ƽ�� ������ ��

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> value;
		sum += value;
	}
	sum -= n - 1;							 //��Ƽ���� �����ϴ��� ���� �÷��� ��(n-1)�� ����

	cout << sum << endl;

	return 0;
}