#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;								//�ڸ����� 1000�ڸ��̹Ƿ� ���ڿ��� �Է¹޾ƾ� �Ѵ�.

	while (1)
	{
		int sum = 0;						//�ڸ����� ���� ����
		cin >> s;

		if (s == "0")						//0�� ��� Ż��
			break;

		for (int i = 0; i < s.length(); i++)
			sum += s[i] - '0';				//�Է¹��� ���� �ڸ����� ����

		while (sum > 9)						//sum�� 10�̻��� ���
		{
			int sum2 = sum;					//sum2�� sum�� ���� ����
			sum = 0;						//sum�� 0���� �ʱ�ȭ
			while (sum2 != 0)				//sum2�� 0�� �ƴϸ�
			{
				sum += sum2 % 10;			//sum2�� ������ �ڸ����� sum�� ����
				sum2 /= 10;					//������ �ڸ�����  ����
			}
		}
		cout << sum << endl;
	}

	return 0;
}