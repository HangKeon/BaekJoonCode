#include <iostream>
using namespace std;

int main()
{
	int n;						//����Ʋ�� ����
	int k;						//�� ��õ Ƚ��
	int t;						//��õ ���� �л� ��ȣ
	int cnt = 0;				//���� ���� ����Ʋ ����
	int rec[101] = { 0, };		//��õ ���� Ƚ��
	int time[101];				//��õ ���� ����

	cin >> n >> k;

	for (int i = 1; i <= k; i++)
	{
		cin >> t;

		if (rec[t] > 0)			//�̹� ����Ʋ�� �ִ� ���
			rec[t]++;
		else					//���ο� ��ȣ�� ������ ���
		{
			if (cnt < n)		//�� ���� ����Ʋ�� �ִ� ���
			{
				rec[t]++;
				time[t] = i;
				cnt++;
			}
			else				//����Ʋ�� ��� ���� ���
			{
				int Min = 1001;					//�ּ� Ƚ���� ����
				int idx;						//��õ Ƚ���� ���� ���� ��ȣ

				for (int j = 1; j <= 100; j++)
				{
					if (!rec[j])				//����Ʋ�� ���� ��� -> �н�
						continue;

					if (rec[j] < Min)			//���� ���� ��õ Ƚ�� + �� ����� ��ȣ ã��
					{
						Min = rec[j];
						idx = j;
					}
					else if (rec[j] == Min)		//��õ ���� Ƚ���� ���� ���� ����� �ߺ��� ���
					{
						if (time[j] < time[idx])	//���� ���� ����� ��ȣ�� idx�� ����!
							idx = j;
					}
				}

				rec[t]++;						//���� ��õ���� ��ȣ
				time[t] = i;					//��õ���� �ð��� ����

				rec[idx] = 0;					//��õ���� Ƚ�� �ʱ�ȭ -> ����Ʋ���� ���ܵǾ����Ƿ�!
				time[idx] = 0;					//��õ���� �ð� �ʱ�ȭ
			}
		}
	}

	for (int i = 1; i <= 100; i++)
		if (rec[i])
			cout << i << ' ';

	return 0;
}