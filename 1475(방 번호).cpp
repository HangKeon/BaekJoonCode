#include <iostream>
using namespace std;

int main()
{
	int n;								//�� ��ȣ
	int ans;							//�ʿ��� ��Ʈ ���� �ּҰ�
	int num[10] = { 0, };				//����� ������ ����
	int max = 0;						//���� ���ڱ� �� ���� ���� ���� ���� ������ ����
	int tmp;							//�ӽ÷� (num[6] + num[9] + 1)/2�� ����

	cin >> n;

	if (n == 0)								//n�� 0�ΰ��
		ans = 1;
	else
	{
		while (n)
		{
			num[n % 10]++;					//n�� �� �ڸ��� ������ ����
			n /= 10;						//���� n�� ���� �ڸ��� ����
		}

		for (int i = 0; i < 10; i++)			//���� ���� ���� ������ ������ ���ϱ� ���� �� -> 6, 9�� ����
		{
			if (i != 6 && i != 9)
			{
				if (max < num[i])
					max = num[i];
			}
		}

		tmp = (num[6] + num[9] + 1) / 2;

		if (tmp < max)						//����� ��Ʈ�� �ּڰ��� ���ϱ�
			ans = max;
		else
			ans = tmp;
	}
	cout << ans << endl;

	return 0;
}