#include <iostream>
using namespace std;

int main()
{
	char ch[20];												//�ܾ 20�� �̳��� �Է��ϱ� ����.
	int sum = 0;												//�Է��� ���ڿ��� ���� ��
	bool check = 0;												//�켱�� �������� ����.


	while (1)
	{
		cin >> ch;

		if (strlen(ch) <= 20)									//�Է��ϴ� ���ڿ��� ���̰� 20���� ���ų� ���� ���
		{
			for (int i = 0; i < strlen(ch); i++)
			{
				if (ch[i] >= 'A' && ch[i] <= 'Z')				//ch�� �빮���� ���
					sum += (int)ch[i] - 38;
				else if (ch[i] >= 'a' && ch[i] <= 'z')			//ch�� �ҹ����� ���
					sum += (int)ch[i] - 96;
			}

			for (int i = 2; i <= sum; i++)
			{
				if (i < sum && sum%i == 0)						//i<sum �̸鼭 �Ҽ��� �ƴ� ���
					break;

				if (i == sum && sum%i == 0)						//i=sum �̸鼭 sum�� i�� �������� ���� �������� 0�� ���! -> ��, �ڱ� �ڽ����� ���������� ���!
					check = 1;
			}

			if (check || sum == 2)								//���� check�� true �̰ų� sum=2���
				cout << "It is a prime word!" << endl;
			else												//�� �̿ܿ���
				cout << "It is not a prime word!" << endl;

			return 0;											//while������ ������ ���� �ڵ� -> ���� ���� �� while�� ������ ����.
		}
		else
		{
			//�Է��ϴ� ���ڿ��� ũ�Ⱑ 20���� ū ���
		}
		cout << "�ٽ� �Է��ϼ��� : ";

	}

	return 0;
}

//�߻�