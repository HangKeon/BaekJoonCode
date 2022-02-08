#include <iostream>
using namespace std;

int main()
{
	int n;											//���� ���� �� ���� ��
	int a, b;										//A,B�� ���� ������ ���� �׸��� �� ����
	int tmp;										//A,B�� ���� ������ ���� �׸��� ��ȣ�� ����
	char ans[1001];									//���帶�� ���ڸ� ����� �迭
	int cnt = 0;									//�迭 ans�� ���� A,B,D�� ����

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int akid[5] = { 0, };							//A�� �� ������ �׸��� ��ȣ ����(1 ~ 4)
		int bkid[5] = { 0, };							//B�� �� ������ �׸��� ��ȣ ����(1 ~ 4)

		//A�� ���� �ڵ�
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			cin >> tmp;
			akid[tmp]++;
		}

		//B�� ���� �ڵ�
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> tmp;
			bkid[tmp]++;
		}

		int who = 0;									//A,B�� ���ڸ� �����ϴ� ����

		for (int j = 4; j >= 1; j--)
		{
			if (akid[j] > bkid[j])					//���� A > B���
				who = 1;
			else if (akid[j] < bkid[j])				//���� A < B���
				who = 2;

			if (who != 0)							//who�� 1 �Ǵ� 2�� �� ��� Ż��
				break;
		}

		if (who == 0)								//���º��� ���
			ans[cnt] = 'D';
		else if (who == 1)							//���ڰ� A�� ���
			ans[cnt] = 'A';
		else if (who == 2)							//���ڰ� B�� ���
			ans[cnt] = 'B';

		cnt++;
	}
	

	for (int i = 0; i < n; i++)
		cout << ans[i] << endl;
	
	return 0;
}