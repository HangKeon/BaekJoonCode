#include <iostream>
using namespace std;

int main()
{
	int n;								//1~n ������ �� �� �ű��� ���� ã�� ���� ����
	int tmp;							//�ӽ÷� ������ ����
	int sum = 0;						//���ڵ��� �� �ڸ����� �� ���� ������ ����
	int cnt = 0;						//�ű��� ���� ���� ����

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		tmp = i;
		sum = 0;

		while (tmp != 0)
		{
			sum += tmp % 10;			//���� �ڸ��� ����
			tmp /= 10;					//���� �ڸ��� �����ϰ� �ٽ� ����
		}

		if (i % sum == 0)
			cnt++;
	}

	cout << cnt << endl;


	return 0;
}