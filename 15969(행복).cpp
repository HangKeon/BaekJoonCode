#include <iostream>
using namespace std;

int main()
{
	int n, index, min, value;			//n = �л� ��, index = �ּҰ��� �ε��� ����, min = �ּҰ� ����, value = ���� ���� ���� - ���� ���� ����
	int tmp;							//�ӽð� ����
	int arr[1001];						//�л� ���� ����

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		min = 9999;

		for (int j = i; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}

		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}

	value = arr[n - 1] - arr[0];

	cout << value << endl;





	return 0;
}