#include <iostream>
using namespace std;

int main()
{
	for (int i = 4; i <= 1000; i++)			//4 ~ 1000 ������ �������� ���ϱ� ���� ��
	{
		int sum = 0;						//�ڽ��� ������ ����� ���� ����

		for (int j = 1; j <= i / 2; j++)		//i�� ����� ã�� ���� ��
		{
			if (i%j == 0)					//j�� i�� ������
				sum += j;
		}

		if (sum == i)							//���������
			cout << sum << endl;
	}


	return 0;
}