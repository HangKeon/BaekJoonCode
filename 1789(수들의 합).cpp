#include <iostream>
using namespace std;

int main()
{
	long long int s;						//���� �ٸ� n���� �ڿ����� ��
	long long int n = 0;					//s�� ���ϱ� ���� �ڿ������� ����
	long long int i = 0;					//�ݺ����� ����ϱ� ���� �ε�����
	int cnt = 0;							//S�� �Ǳ� ���� �ڿ����� ����

	cin >> s;

	while (1)
	{
		i++;
		n += i;
		cnt++;

		if (n > s)
		{
			cnt--;
			break;
		}
	}

	cout << cnt << endl;
	
	/*long long int k=1;					//4,294,967,295�� ���ϱ� ���� ��

	for (int j = 1; j <= 32; j++)
	{
		k *= 2;
	}
	cout << k << endl;*/

	return 0;
}