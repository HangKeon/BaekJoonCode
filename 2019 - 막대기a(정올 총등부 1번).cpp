#include <iostream>
using namespace std;

int main()
{
	int n;								//����� ����
	int stick[100001];					//������ ����
	int cnt = 0;						//���� �����ʿ� �ִ� ���뺸�� �� ������ ����

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> stick[i];

	for (int i = 1; i < n; i++)
	{
		if (stick[i] > stick[n])
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}