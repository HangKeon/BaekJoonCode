#include <iostream>
using namespace std;

#include <iostream>
#include <algorithm>						//�ּڰ� �����ϴ� min�Լ��� ���� ����
using namespace std;

int main()
{
	int n;											//�����ϴ� ��
	int dp[100001];									//dp[n] -> n���� �����ϴ� �ּ� ����� ��

	cin >> n;

	dp[1] = 0;										//1���� 1���� �����ϴ� �ּ� ����� �� = 0����

	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;						//3�� -> 1�� ���� ���

		if (i % 2 == 0)								//2�� -> 2�� ������ �������� ���
			dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)								//1�� -> 3���� ������ �������� ���
			dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	cout << dp[n] << endl;

	return 0;
}












/*
//1463��
int min(int a, int b);

int main()
{
	int N;
	int *Dp;										//��������

	cout << "���ڸ� �Է��Ͻÿ� : ";
	cin >> N;
	
	while (1)
	{
		if (N <= 0)									//�Է��� N�� 0���� �۰ų� ���� ���
		{
			cout << "���ڸ� �ٽ� �Է��ϼ��� : ";	//�ٽ� �Է�
			cin >> N;
		}
		else										//�Է��� N�� 0���� ū ���
		{
			Dp = new int[N + 1];							
			Dp[1] = 0;								//N=1�� ��� �ּҰ��� 0�̱� �����̴�.

			for (int i = 2; i <= N; i++)
			{
				Dp[i] = Dp[i - 1] + 1;					//1�� �� ���

				if (i % 2 == 0)							//2�� ������ �������� ���
					Dp[i] = min(Dp[i], Dp[i / 2] + 1);

				if (i % 3 == 0)							//3���� ������ �������� ���
					Dp[i] = min(Dp[i], Dp[i / 3] + 1);
			}
			break;
		}
	}

	cout << "�ּ� Ƚ�� : " << Dp[N] << endl;

	return 0;
}

int min(int a, int b)								//�ּҰ��� ���ϴ� �Լ�
{
	return a < b ? a : b;							//a<b -> a
}													//�ƴϸ� -> b �� ���

//��
*/