#include <iostream>
using namespace std;

int main()
{
	int a[51];
	int b[51];
	int n;							//�迭�� ����Ǵ� ������ ����
	int s = 0;						//a,b�� ��

	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> a[i];
		cin >> b[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)	//a�� �������� -> ��������
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}

		for (int j = 0; j < n - 1 - i; j++)	//b�� �������� -> ��������
		{
			if (b[j] < b[j + 1])
			{
				int tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		s += a[i] * b[i];

	cout << s << endl;

	return 0;
}