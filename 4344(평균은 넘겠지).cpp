#include <iostream>
using namespace std;

int main()
{
	int N;													//���� ��
	float inspect = 0;										//����� �ʰ��� �л� ��
	float sum = 0;											//�л� ���� ��

	cin >> N;												//���� �� �Է�

	int *team = new int[N];								//�� ���� �ο����� ���� �迭
	int *score;											//�� �� �л����� ����
	float *avg = new float[N];								//�л� ���� ���
	float student_per[50];									//avg�� ���� �л����� ����

	for (int i = 0; i<N; i++)
	{
		cin >> team[i];									//���� �л� �� �Է�
		score = new int[team[i]];
		//student_per = new float[i];
		//avg = new float[i];

		for (int j = 0; j<team[i]; j++)
		{
			cin >> score[j];								//�� �л����� ���� �Է�
			sum += score[j];								//�������� ��
		}

		avg[i] = sum / team[i];								//���� ���

		for (int k = 0; k < team[i]; k++)					//�� �л� ������ ��� ���� ��
		{
			if (score[k] > avg[i])							//�л� ������ ��պ��� ���� ���
				inspect++;
		}

		cout << fixed;										//�̰� �Ҽ����� �������� ǥ��
		cout.precision(3);									//�Ҽ��� ��°�ڸ����� �ݿø��ؼ� �Ҽ��� ��°�ڸ������� ǥ��
		student_per[i] = float(inspect / team[i]) * 100;		//����� ���� �л� ����

		inspect = 0;										//inspect�� �ʱ�ȭ
		sum = 0;											//sum�� �ʱ�ȭ
	}

	for (int i = 0; i<N; i++)
	{
		//cout << "sum : " << sum << endl;
		//cout << "��� : " << avg[i] << endl;
		//cout << "inspect : " << inspect << endl;
		//cout << "team[i] : " << team[i] << endl;
		cout << student_per[i] << "%" << endl;
	}

	return 0;
}

//�߻�