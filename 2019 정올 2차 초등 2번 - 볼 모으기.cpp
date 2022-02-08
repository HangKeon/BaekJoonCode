#include <iostream>
using namespace std;

int cnt = 987654321;				//���� �ּ� �̵�Ƚ��
int comp = 0;						//cnt�� ���Ͽ� �ּ� �̵�Ƚ���� �ܷ��.
int check;							//���࿡ ������ ������ �� ��쿡�� ���̻� ������ �ʰ� ������ ���� ����
char color[500001];					//���� ���� ����

int LeftToRight(int n);					//���ʿ��� ���������� �Űܼ� �����ϴ� �Լ�
int RightToLeft(int n);					//�����ʿ��� ������ �Űܼ� �����ϴ� �Լ�

int main()
{
	int n;								//���� �� ����
	cin >> n;

	for(int i=0;i<n;i++)
		cin >> color[i];

	LeftToRight(n);
	RightToLeft(n);

	cout << cnt << endl;

	return 0;
}

int LeftToRight(int n)					//���ʿ��� ���������� �Űܼ� �����ϴ� �Լ�
{
	check = n - 1;						//n-1�� �ʱ�ȭ
	for (int i = 0; i < n; i++)
	{
		if (i == check)					//���� color[i]�� ���̻� ������ �ʿ䰡 ���ٸ�
			break;

		int j = n - 1;				//���� ������ �ε��� ��
		int tcnt = 0;				//���� ������ �� ���� ���� ������ 0�� �ƴϴ�

		while (1)
		{
			if (color[i] == 'B')			//���� ���� ���� ���� B�� ���
			{
				if (color[i] != color[j])	//���� ���� ������ �� ���� �ٸ��ٸ�
					break;

				j--;						//�������� �� ĭ �Űܼ� ��
				tcnt++;
			}
			else if (color[i] == 'R')		//���� ���� ���� ���� R�� ���
			{
				if (color[i] != color[j])	//���� ���� ������ �� ���� �ٸ��ٸ�
					break;

				j--;						//�������� �� ĭ �Űܼ� ��
				tcnt++;
			}

			if (tcnt != 0 && color[i] != color[j])					//���� color[i]�� �ű� �� �ִٸ�
			{
				char temp = color[i];		//color[i]�� ���� �ӽ÷� ����

				for (int k = i; k < j; k++)				//�ε����� i���� j-1���� �������� �� ĭ�� �̵�
					color[k] = color[k + 1];

				color[j] = temp;			//���� color[i]�� ����Ǿ� �ִ� ���� color[j]�� ����

				comp++;
				check = j;
				i = -1;						//�Ű�� ������ �ٽ� ó������ ���ؾ��ϹǷ� i=-1�� �ʱ�ȭ�Ͽ� �ٽ� ���۽� i=0���� �����.
				break;
			}

			if (tcnt != 0 && i == j)		//���� color �� ���� ���� ���� ������ ���
			{
				comp = 0;
				break;
;			}
		}
	}

	if (cnt > comp)
		cnt = comp;

	return cnt;
}

int RightToLeft(int n)						//�����ʿ��� ������ �Űܼ� �����ϴ� �Լ�
{
	check = 0;						//0���� �ʱ�ȭ

	for (int i = n-1; i >= 0; i--)
	{
		if (i == check)					//���� color[i]�� ���̻� ������ �ʿ䰡 ���ٸ�
			break;

		int j = 0;				//���� ������ �ε��� ��
		int tcnt = 0;				//���� ������ �� ���� ���� ������ 0�� �ƴϴ�

		while (1)
		{
			if (color[i] == 'B')			//���� ���� ���� ���� B�� ���
			{
				if (color[i] != color[j])	//���� ���� ������ �� ���� �ٸ��ٸ�
					break;

				j++;						//���������� �� ĭ �Űܼ� ��
				tcnt++;
			}
			else if (color[i] == 'R')		//���� ���� ���� ���� R�� ���
			{
				if (color[i] != color[j])	//���� ���� ������ �� ���� �ٸ��ٸ�
					break;

				j++;						//���������� �� ĭ �Űܼ� ��
				tcnt++;
			}

			if (tcnt != 0 && color[i] != color[j])					//���� color[i]�� �ű� �� �ִٸ�
			{
				char temp = color[i];		//color[i]�� ���� �ӽ÷� ����

				for (int k = i; k > j; k--)				//�ε����� i���� +1���� ���������� �� ĭ�� �̵�
					color[k] = color[k - 1];

				color[j] = temp;			//���� color[i]�� ����Ǿ� �ִ� ���� color[j]�� ����

				comp++;
				check = j;
				i = n;					//�Ű�� ������ �ٽ� ó������ ���ؾ��ϹǷ� i=n�� �ʱ�ȭ�Ͽ� �ٽ� ���۽� i=n-1�� �����.
				break;
			}

			if (tcnt != 0 && i == j)		//���� color �� ���� ���� ���� ������ ���
			{
				comp = 0;
				break;
			}
		}
	}

	if (cnt > comp)
		cnt = comp;

	return cnt;
}