#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
	int page[11] = { 0, };				//�������� ���� ���� ������ ������ �迭
	int n;								//å�� ������

	cin >> n;
	
	for (int i = 1; i <= n; i++)			//å �������� 1�ʺ��� �����ϹǷ� i�� 1���� ����
	{
		int num = i;

		while (num != 0)
		{
			page[num % 10]++;			//���� ���ڸ� ����
			num /= 10;

			if (num == 0)				//Ż������
				break;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		cout << i << " ���� : " << page[i] << endl;
	}

	return 0;
}