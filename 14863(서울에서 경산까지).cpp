#include <iostream>
using namespace std;

int arr[20][4] = { 0, };		//�������� n<=20�̹Ƿ� ù �迭�� 20����, �ι�° �迭�� ����, ����money, ������, ������money�� 4��!
int arr2[20] = { 0, };			//�̰� arr���� �ʿ��ϹǷ� arr�� ù��° �迭�� ���� ������ ����!
int n, k;						//n = ������ ����, k = �ɸ��� �ִ�ð�
int time, money, best = 0;		//time = �ɸ��� �ð��� ��, money = ��� ���� ��, best = ������ �����ϴ� money �� �ִ밪!

void GetBest(int num)
{
	if (n == num)									//���� n == num �̶��
	{
		time = 0;									//time = 0 ���� �ʱ�ȭ
		for (int i = 0; i < n; i++)
			time += arr[i][arr2[i]];				//main�� ������ �Է��� arr���� time �� �߰�!
													//���⼭ arr2�� ����� ������ time �̹Ƿ� �ʱⰪ = 0 �� arr2�� ����� ��!
		if (time <= k)								//time <= k ��� -> ������ ���ǿ� ����!
		{
			money = 0;								//money = 0 ���� �ʱ�ȭ
			for (int i = 0; i < n; i++)
				money += arr[i][arr2[i] + 1];			//main �Լ����� �Է��� arr���� money �� �߰�!
														//arr2[i]+1 ��� ������ arr�� �ι�° �迭�� money�̱� ����!
			if (best < money)
				best = money;
		}

		return;
	}

	arr2[num] = 0;									//arr2�� 0���� �ʱ�ȭ �����ν� '����' �̿��� ���� ���� ���� �� �ִ�!
	GetBest(num + 1);								//num�� �Է��� n�� ���� ���� �� ������ ����!

	arr2[num] = 2;
	GetBest(num + 1);

}


int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 4; j++)
			cin >> arr[i][j];

	GetBest(0);

	cout << best << endl;


	return 0;
}

//��