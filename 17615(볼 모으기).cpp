#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;							//���� �� ����
	int sw = 0;						//�Űܾ� �� ���� �ƴ� ���� ������ �� 1�� �ٲ�.
	int cnt = 0;					//�ű�� ���� ����
	int m = 2e9;					//�ű�� ���� �ּ� ����
	string s;						//���� ����

	cin >> n;

	cin >> s;

	for (int i = 0; i < n; i++)		//R�� �������� ��� �ű�� ���
	{
		if (s[i] == 'B')
			sw = 1;

		if (sw && s[i] == 'R')
			cnt++;
	}

	sw = 0;
	if (cnt < m)
		m = cnt;
	cnt = 0;

	for (int i = n - 1; i >= 0; i--)	//R�� ���������� ��� �ű�� ���
	{
		if (s[i] == 'B')
			sw = 1;

		if (sw&&s[i] == 'R')
			cnt++;
	}

	sw = 0;
	if (cnt < m)
		m = cnt;
	cnt = 0;

	for (int i = 0; i < n; i++)		//B�� �������� ��� �ű�� ���
	{
		if (s[i] == 'R')
			sw = 1;

		if (sw && s[i] == 'B')
			cnt++;
	}

	sw = 0;
	if (cnt < m)
		m = cnt;
	cnt = 0;

	for (int i = n - 1; i >= 0; i--)	//B�� ���������� ��� �ű�� ���
	{
		if (s[i] == 'R')
			sw = 1;

		if (sw&&s[i] == 'B')
			cnt++;
	}

	if (cnt < m)
		m = cnt;

	cout << m << endl;

	return 0;
}