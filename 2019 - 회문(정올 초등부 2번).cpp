#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;								//���ڿ� ����
	char s[100001], q[100001];			//s = ���ڿ��� �Է¹��� �迭, q = ����ȸ���� ���� �� ����� �迭
	int cnt[31];						//�� ���ڿ��� ��(0,1,2)�� ������ �迭

	cin >> t;

	for (int k = 0; k < t; k++)
	{
		int i;

		cin >> s;

		int n = strlen(s);									//�Է��� ������ ����

		for (i = 0; i < n; i++)
			if (s[i] != s[n - i - 1])						//���� s[i]�� s[n-i-1]�� �ٸ� ������ ��� - > ȸ���� �ƴ� ���
				break;

		if (i == n)											//���� if���� ��� ����� ��� -> ��, ȸ���� ���
		{
			//cout << '0' << endl;
			cnt[k] = 0;
			continue;
		}

		int pv = i, c = 0;									//pv = ������ s[i] != s[n-1-i]�� i���� ����, c = q�� �ε���

		for (i = 0; i < n; i++)								//i�� pv�� �� -> ���� ���� �ǳʶٰ� q�� �����ϴ� ���
			if (i != pv)
				q[c++] = s[i];

		for (i = 0; i < c; i++)								//���� ���� �ǳʶٰ� ������ q�� ����ȸ������ Ȯ��
			if (q[i] != q[c - 1 - i])
				break;

		if (i == c)											//����ȸ���� ���
		{
			//cout << '1' << endl;
			cnt[k] = 1;
			continue;
		}

		c = 0;												//������ �ǳʶ� ���� ����ȸ���� �ƴ� ��� q�� �ٽ� �����ؾ� �ϹǷ� c�� 0���� �ʱ�ȭ

		for (i = 0; i < n; i++)								//i�� (n-1)ipv�� �� -> ������ ���� �ǳ� �ٰ� q�� �����ϴ� ���
			if (i != n - 1 - pv)
				q[c++] = s[i];

		for (i = 0; i < c; i++)								//������ ���� �ǳʶٰ� ������ q�� ����ȸ������ Ȯ��
			if (q[i]!=q[c - 1 - i])
				break;

		if (i == c)											//����ȸ���� ���
		{
			//cout << '1' << endl;
			cnt[k] = 1;
			continue;
		}

		//cout << '2' << endl;								//������ -> ȸ��, ����ȸ�� x
		cnt[k] = 2;
	}

	for (int k = 0; k < t; k++)
		cout << cnt[k] << endl;

	return 0;
}