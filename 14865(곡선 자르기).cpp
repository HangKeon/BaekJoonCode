#include <iostream>
using namespace std;


int panx[1000006];

int tc = 0;

int pany[1000006];

int realbong = 0;

bool flag = false;

void cCheck() 
{

	int cnt = 0;

	int inc = 0;//���츮 ���� ��

	int notInc = 0;//���츮 ���� ���ϴ� �� 

	int open = 0;

	for (int i = 0; i < realbong; i++) 
	{//���츮 ��ȣȭ

		if (pany[i] != 0) 
		{

			for (int j = i + 1; j < realbong; j++) 
			{//i+1�� ������ ������������ �Ȱ��� ������ �༮�� ã�ƾ��ϴ�..

				if (pany[i] == pany[j]) 
				{

					panx[i] = -1; // '('

					panx[j] = 1; // ')'

					pany[i] = 0;//��������Ƿ� �ٲ��ش�.

					pany[j] = 0;

					break;

				}

			}

		}

	}

	for (int i = 0; i < realbong; i++) 
	{

		if (panx[i] == -1) 
		{//���ºκ�

			if (!flag) 
			{//������ ��������

				flag = true;

			}

		}

		else if (panx[i] == 1) 
		{//�ݴºκ�

			if (flag) 
			{//���� ���ϴº��츮

				notInc++;

			}

			else 
			{//�����ϴ� ���츮

				inc++;

			}

			flag = false;//�������� flag�� false�� �ٲ��ش�.

		}

	}

	cout << inc << " " << notInc << endl;

}

void sort() 
{

	int temp;

	for (int i = 0; i < realbong; i++) 
	{

		for (int j = i + 1; j < realbong; j++) 
		{

			if (panx[i] > panx[j]) 
			{

				temp = panx[i];

				panx[i] = panx[j];

				panx[j] = temp;

				temp = pany[i];

				pany[i] = pany[j];

				pany[j] = temp;

			}

		}

	}

}

int main() 
{

	cin >> tc;

	int tempx;

	int tempy;

	for (int i = 0; i < tc; i++) 
	{

		cin >> tempx >> tempy;

		if (tempy > 0) 
		{

			panx[realbong] = tempx;

			pany[realbong] = tempy;

			realbong++;

		}

	}

	sort();

	cCheck();

	return 0;

}