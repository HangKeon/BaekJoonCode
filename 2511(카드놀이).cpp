#include <iostream>
using namespace std;

int main()
{
	int arr[10];				//A�� ������ ī�� ����
	int brr[10];				//B�� ������ ī�� ����
	int acnt = 0;				//A�� �¸��� Ƚ��
	int bcnt = 0;				//B�� �¸��� Ƚ��
	int sw = 0;					//0 : ��� ���, 1 : A�� �¸�, 2 : B�� �¸�

	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	for (int i = 0; i < 10; i++)
		cin >> brr[i];

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > brr[i])
		{
			acnt += 3;
			sw = 1;
		}
		else if (arr[i] < brr[i])
		{
			bcnt += 3;
			sw = 2;
		}
		else
		{
			acnt++;
			bcnt++;
		}
	}

	cout << acnt << ' ' << bcnt << endl;

	
	if (acnt > bcnt)
		cout << 'A' << endl;
	else if (acnt < bcnt)
		cout << 'B' << endl;
	else
	{
		if (sw == 1)
			cout << 'A' << endl;
		else if (sw == 2)
			cout << 'B' << endl;
		else if (sw == 0)
			cout << 'D' << endl;
	}

	return 0;
}