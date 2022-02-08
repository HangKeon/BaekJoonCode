#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);

	int n;							//�ڿ����� ����
	int m;							//������ ����
	int add[100001] = { 0, };		//add[n] : arr[1] ~ arr[n]�� ���� ��
	int a, b;						//a ~ b�� ���� -> ������ ���� ���ϱ� ���� ����

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a;

		add[i] = add[i - 1] + a;
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		cout << add[b] - add[a - 1] << "\n";
	}

	return 0;
}