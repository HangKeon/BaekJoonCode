#include <iostream>
using namespace std;

int main()
{
	int arr[10];				//A�� ������ ī�� ����
	int brr[10];				//B�� ������ ī�� ����
	int acnt = 0;				//A�� �¸��� Ƚ��
	int bcnt = 0;				//B�� �¸��� Ƚ��

	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	
	for (int i = 0; i < 10; i++)
		cin >> brr[i];

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > brr[i])
			acnt++;
		else if (arr[i] < brr[i])
			bcnt++;
	}

	if (acnt > bcnt)
		cout << 'A' << endl;
	else if (acnt < bcnt)
		cout << 'B' << endl;
	else
		cout << 'D' << endl;

	return 0;
}