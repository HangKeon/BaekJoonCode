#include <iostream>
using namespace std;

//������ ù ���� ���ʶ�, �� 1~4 ���� ������ ���� �ٲ�� ���� ���� ���η� �̵�
//�׷��� ù �ٿ� 1~4 ������ �ƴ϶�� ������ ���� �ű�� ���� ���� �Ѵ�
//�׸��� ���� �� �����ٺ��ʹ� ������ ���� �ű�� ������ ��������!!!

int num = 1;					//arr �迭�� 1 ~ 16�� ���ڸ� ���� ����
int cnt = 0;					//�̵� Ƚ��
int sw;							//��(1)���� ��(2)���� ����
int arr[4][4];					//Ÿ�ϸ��
int dx[] = { 0,1 };				//����
int dy[] = { 1,0 };

void move_right(int x,int y)	//���������� �̵�
{
	int temp;
	sw = 1;
	
	
	int ay = y - dy[0];
	cnt++;

	if (ay < 0)
		ay = 3;

	if (arr[x][ay] == num)
	{
		int temp;




		return;
	}
		
	else
		move_right(x, ay);

	


}

void move_left()	//�������� �̵�
{

}

int main()
{

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> arr[i][j];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] != num)
			{
				if (i == 0)					//ù ��(i==0)�� ���
				{
					if (arr[i][j] >= 1 && arr[i][j] <= 4)	//ù �ٿ� 1 ~4 �� ��� -> ������ �̵�
					{
						move_right(i, j);
					}
					else			// ù �ٿ� 1 ~4 �� �ƴ� �ٸ� ���� ��� �ִٸ� -> �Ʒ������� �̵�
					{

					}
				}
				else						//��° �ٺ��� ��° �ٱ��� -> ������ �����θ� �̵�!
				{

				}
			}
				
			num++;
		}
	}

	return 0;
}