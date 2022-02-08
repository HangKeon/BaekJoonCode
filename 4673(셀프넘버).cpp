#include <iostream>
using namespace std;
#define N 10001

bool check[10001] = { 0, };							//�����ѹ��� �ƴ� ������ true�� �ݿ��� ��

int SelfNum(int n)									//���� �ѹ��� �ƴ� ������ ã�� �Լ�
{
	int sum = n;									//�տ��ٰ� �̸� n�� ����
	while (1)
	{
		if (n == 0)									//n=0�� ��� ����
			break;
		sum += n % 10;								//n�� �������� sum�� ���Ѵ�.
		n /= 10;									//n�� 10���� ���� ������ ����
	}

	return sum;
}

int main()
{
	for (int i = 1; i <= N; i++)					//1~N������ ����
	{
		if (SelfNum(i) <= N)					//SelfNum�� ���� N���� �۰ų� ���� ���
			check[SelfNum(i)] = 1;				//check�� ���� 1�� ���� -> ������ ����
	}

	for (int i = 1; i < N; i++)
		if (!check[i])							//���� check�� false���
			cout << i << "  ";					//���

	return 0;
}