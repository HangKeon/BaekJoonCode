#include <iostream>
using namespace std;

int main()
{
	int n, store;						//n= ����Ŭ �� ��, store = n���� ������ ���߿� ���� ����
	int cnt = 0;						//����Ŭ ����
	int first, second;					//first = n�� ���� �ڸ� ��, second =n�� ���� �ڸ� ��
	int sum = 0;						//first & second�� ������ ��

	cin >> n;

	store = n;

	while (1)
	{
		cnt++;

		if (n < 10)						//n�� ���� �ڸ��� ���
			n *= 10;

		if (cnt > 100)					//Ż������
		{
			//cout << "���� ������ �ʽ��ϴ�." << endl;
			break;
		}


		first = n / 10;					//���� �ڸ� ����
		second = n % 10;				//���� �ڸ� ����
		sum = (first + second) % 10;	//first + second�� ���� �ڸ� ����
		n = second * 10 + sum;			//�ٽ� ���ڸ� ����� ����

		if (n == store)					//�� ����Ŭ�� �� ������ ���
		{
			cout << cnt << endl;
			break;
		}
	}

	return 0;
}