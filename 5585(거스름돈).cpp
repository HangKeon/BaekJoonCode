#include <iostream>
using namespace std;

int main()
{
	int coin[] = { 500,100,50,10,5,1 };					//������ ����
	int money;											//������ ����
	int cnt = 0, i = 0;									//cnt = �ܵ��� ����
	int q;												//���� ������ ����

	cin >> money;

	money = 1000 - money;								//����ϰ� ���� ���� ����

	while (1)
	{
		q = money / coin[i];
		cnt += q;
		if (q == 0)
		{
			i++;
			continue;									//�� ������ �������� �ʰ� ���� �ݺ��� ����
		}
		money %= coin[i];

		if (money == 0)									//Ż������
			break;

	}

	cout << cnt << endl;


	return 0;
}