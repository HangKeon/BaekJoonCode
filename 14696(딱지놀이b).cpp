#include <iostream>
using namespace std;

int main()
{
	int n;							//���� ������ �� ���� ��
	int num;						//���帶�� �׸��� �� ����
	int tmp;						//�׸� ����� �Է¹޴� ����
	int a[5] = { 0, };				//A�� ���� ����� ������ ����(1~4)
	int cmp[5] = { 0, };
	int round = 0;					//���带 ������ ����

	cin >> n;

	//�迭 a�� ���ϱ� ���� �ι�°���� �迭cmp�� ����
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		cin >> tmp;

		cmp[tmp]++;
		round = i;						//���� ���带 ����
	}

	//����° �ٺ��� �Է��ؼ�cmp�� ��
	for (int i = 2; i <= n; i++)
	{
		cin >> num;

		for (int j = 0; j < num; j++)
		{
			cin >> tmp;

			a[tmp]++;
		}

		for (int j = 4; j >= 1; j--)
		{
			if (a[j] > cmp[j])					//���� a>cmp�̸�
			{
				memcpy(cmp, a, sizeof(a));		//�迭 cmp�� �迭 a�� ����
				round = i;
				break;
			}
			else if (a[j] < cmp[j])
			{
				break;
			}
		}


	}

	cout << round << endl;

	return 0;
}