#include <iostream>
using namespace std;

int main()
{
	int n, k;							//n = �¿�� �ִ� �°� ��, k = ������ ��
	int test;							//�׽�Ʈ ���̽� ��
	int arr[31];
	arr[1] = 1;
	
	cin >> test;

	for (int i = 1; i <= test; i++)
	{
		cin >> k;
		for (int j = 1; j < k; j++)
		{
			arr[j + 1] = 2 * arr[j] + 1;
		}
		cout << arr[k] << endl;

	}

	return 0;
}