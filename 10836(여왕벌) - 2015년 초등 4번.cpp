#include <iostream>
using namespace std;

int main()
{
	int m, n;						//m : ����, ������ ũ��, n : ��¥ ��
	int arr[1401];					//����ĭ(���� �Ʒ�~���� �� ~ ������ ��) -> 2*700+1
	int zero, one, two;				//0,1,2�� ������ ����

	cin >> m >> n;

	for (int i = 0; i < 2 * m - 1; i++)		//ó�� ������ �� 1�̹Ƿ� 1�� �ʱ�ȭ
		arr[i] = 1;

	for (int i = 1; i <= n; i++)
	{
		cin >> zero >> one >> two;

		for (int i = zero; i < zero + one; i++)	//1��ŭ �����ϴ� ���
			arr[i]++;

		for (int i = zero + one; i < 2 * m - 1; i++)	//2��ŭ �����ϴ� ���
			arr[i] += 2;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == 0)
				cout << arr[m - 1 - i] << ' ';
			else
				cout << arr[m - 1 + j] << ' ';
		}
		cout << endl;
	}

	return 0;
}