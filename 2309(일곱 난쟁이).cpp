#include <iostream>
using namespace std;
//���Ʈ ���� �˰���(���� Ž��)

int main()
{
	int arr[10];					//9���� �������� Ű�� �Է�
	int sum = 0;					//������ 9���� Ű�� ��
	int res = 0;					//��, ���� �Ǵ�

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < 9; i++)						//������ 2���� Ű�� ���� �� 100�� ������ ��� ã��
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - arr[i] - arr[j] == 100)
			{
				arr[i] = 987654321;
				arr[j] = 987654321;
				res = 1;
				break;
			}
		}
		if (res)
			break;
	}

	for (int i = 0; i < 9; i++)						//ũ������� ����
	{
		for (int j = i + 1; j < 9; j++)
		{
			int tmp;

			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 7; i++)
		cout << arr[i] << endl;


	return 0;
}