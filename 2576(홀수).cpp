#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;						//�Է��� ��
	int j = 0;					//Ȧ���� �ε��� -> Ȧ���� ������ �ǹ���
	int sum = 0;				//Ȧ���� ���� ����
	int arr[7];					//Ȧ���� ������ �迭

	for (int i = 0; i < 7; i++)
	{
		cin >> a;

		if (a % 2 != 0)			//a�� Ȧ���� ��츸 arr�� ���� & ������
		{
			arr[j++] = a;
			sum += a;
		}
	}

	if (j == 0)					//Ȧ���� ���� ���
		cout << -1 << endl;
	else						//Ȧ���� �ִ� ���
	{
		//sort(arr, arr + j);

		for (int i = 0; i < j; i++)
		{
			for (int k = i; k < j; k++)
			{
				int temp;

				if (arr[i] > arr[k])
				{
					temp = arr[i];
					arr[i] = arr[k];
					arr[k] = temp;
				}
			}
		}

		cout << sum << endl << arr[0] << endl;
	}
	

	return 0;
}