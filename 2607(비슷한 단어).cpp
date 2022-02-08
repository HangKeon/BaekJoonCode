#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n;						//�ܾ��� ����
	int sw = 0;					//����� �ܾ �� �� ���� ���
	int x = 0;					//alp<alp2�� ����
	int y = 0;					//alp>alp2�� ����
	int cnt = 0;				//����� �ܾ��� ����
	string s;					//ù ��° ���ڿ�
	string s2;					//������ ���ڿ�
	int alp[27] = { 0 };		//���ڿ� s�� ���ĺ� ������ ������ �迭
	int alp2[27] = { 0 };		//���ڿ� s2�� ���ĺ� ������ ������ �迭

	cin >> n;
	cin >> s;

	for (int i = 0; i < s.length(); i++)		//s�� ���ĺ� ���� ���ϱ�
		alp[s[i] - 'A']++;

	n--;										//���ڿ�s�� ������ ����

	while (n--)
	{
		cin >> s2;

		//���ο� ���ڿ� �Է½� �ʱ�ȭ
		memset(alp2, 0, sizeof(alp2));
		sw = 0;
		x = 0;
		y = 0;

		for (int i = 0; i < s2.length(); i++)	//s2�� ���ĺ� ���� ���ϱ�
			alp2[s2[i] - 'A']++;

		for (int i = 0; i < 26; i++)
		{
			if (alp[i] == alp2[i])				//s�� s2�� ���ĺ� ������ ���� ���
				continue;

			if (abs(alp[i] - alp2[i]) > 1)		//����� �ܾ �� �� ���� ���
			{
				sw = 1;
				break;
			}
			else if (alp[i] < alp2[i])			//���ĺ� ������ ���� ���� ��� x++;
				x++;
			else if (alp[i] > alp2[i])			//���ĺ� ������ ���� ���� ��� y++;
				y++;

			if (x > 1 || y > 1)					//x �Ǵ� y�� ������ 2�̻��� ��� -> ����� �ܾ� �� �� ����!
			{
				sw = 1;
				break;
			}
		}

		if (sw)									//����� �ܾ �ƴϴ�!
			continue;

		cnt++;

	}

	cout << cnt << endl;

	return 0;
}