#include <iostream>
using namespace std;

int main()
{
	int n, p;						//�Է��� ����
	int arr[100];					//p�� �������� �� �������� ����� ���� -> ������� ����!
	int now;						//���� ���� �����ϴ� ����
	int j = 0;

	cin >> n >> p;

	arr[j] = n;
	j++;

	now = n;

	while (1)
	{
		now = (now * n) % p;

		for (int i = 0; i < j; i++)
		{
			if (arr[i] == now)			//��� ��ȯ�Ǵ��� ã�� ����
			{
				cout << j - i << endl;
				return 0;
			}
		}

		arr[j] = now;					//���� ��(now)�� arr�� ����
		j++;
	}


	return 0;
}