#include <iostream>
using namespace std;

int main()
{
	int arr[20][20];							//������

	for (int i = 0; i < 19; i++)
		for (int j = 0; j < 19; j++)
			cin >> arr[i][j];

	//���� Ž��
	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int k;

			if (!arr[i][j])						//���� ���� ���� ���� ���� �Ѿ
				continue;

			for (k = 1; k < 5; k++)
				if (arr[i][j] != arr[i][j + k])	//���ι������� ������ ���� �ٸ� ���� �ִ� ���
					break;

			if (k < 5)							//������ ���� �����ϸ鼭 ���� 5���� ���� ������ ���� ���
				continue;

			if ((j == 14 || arr[i][j + 5] != arr[i][j]) && (j == 0 || arr[i][j - 1] != arr[i][j]))
			{
				cout << arr[i][j] << "\n" << i + 1 << ' ' << j + 1 << endl;

				return 0;
			}
		}
	}

	//���� Ž��
	for (int j = 0; j < 19; j++)
	{
		for (int i = 0; i < 15; i++)
		{
			int k;

			if (!arr[i][j])						//���� ���� ���� ���� ���� �Ѿ
				continue;

			for (k = 1; k < 5; k++)
				if (arr[i][j] != arr[i + k][j])	//���ι������� ������ ���� �ٸ� ���� �ִ� ���
					break;

			if (k < 5)							//������ ���� �����ϸ鼭 ���� 5���� ���� ������ ���� ���
				continue;

			if ((j == 14 || arr[i + 5][j] != arr[i][j]) && (j == 0 || arr[i - 1][j] != arr[i][j]))
			{
				cout << arr[i][j] << "\n" << i + 1 << ' ' << j + 1 << endl;

				return 0;
			}
		}
	}

	//������ �Ʒ� Ž��
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			int k;

			if (!arr[i][j])							//���� ���� ���� ���� ���� �Ѿ
				continue;

			for (k = 1; k < 5; k++)
				if (arr[i][j] != arr[i + k][j + k])	//������ �Ʒ� �������� ������ ���� �ٸ� ���� �ִ� ���
					break;

			if (k < 5)								//������ ���� �����ϸ鼭 ���� 5���� ���� ������ ���� ���
				continue;

			if ((i == 14 || j == 14 || arr[i + 5][j + 5] != arr[i][j]) && (i == 0 || j == 0 || arr[i - 1][j - 1] != arr[i][j]))
			{
				cout << arr[i][j] << "\n" << i + 1 << ' ' << j + 1 << endl;

				return 0;
			}
		}
	}

	//������ �� Ž��
	for (int j = 0; j < 15; j++)
	{
		for (int i = 4; i < 19; i++)
		{
			int k;

			if (!arr[i][j])							//���� ���� ���� ���� ���� �Ѿ
				continue;

			for (k = 1; k < 5; k++)
				if (arr[i][j] != arr[i - k][j + k])	//���ι������� ������ ���� �ٸ� ���� �ִ� ���
					break;

			if (k < 5)								//������ ���� �����ϸ鼭 ���� 5���� ���� ������ ���� ���
				continue;

			if ((i == 4 || j == 14 || arr[i - 5][j + 5] != arr[i][j]) && (i == 14 || j == 0 || arr[i + 1][j - 1] != arr[i][j]))
			{
				cout << arr[i][j] << "\n" << i + 1 << ' ' << j + 1 << endl;

				return 0;
			}
		}
	}

	//���� �ºΰ� ������ ���� ���
	cout << 0 << endl;

	return 0;
}