#include <iostream>
using namespace std;

int main()
{
	int n;								//�� ���� ��
	int std;							//�� ���� �л� ��
	int score[1000];					//�л��� ����
	int sum = 0;						//�� ���� ������ ��
	int cnt = 0;						//����� �Ѵ� �л��� ��
	float avg;							//�� ���� ��� ����
	float percent[10];					//�� ���� ���� ����� �Ѵ� �л��� ����

	cin >> n;

	for (int i = 0; i < n; i++)			//�Է�
	{
		cin >> std;
		sum = 0;

		for (int j = 0; j < std; j++)
		{
			cin >> score[j];
			sum += score[j];
		}

		avg = (float)(sum / std);		//��� ����

		for (int j = 0; j < std; j++)
		{
			if (avg < score[j])			//��պ��� ũ�ٸ�
				cnt++;
		}

		percent[i] = ((float)cnt / std) * 100;
		cnt = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << fixed;
		cout.precision(3);
		cout << percent[i] << '%' << endl;
	}




	return 0;
}