#include <iostream>
using namespace std;

int main() 
{
	int n;						//��� ��
	int x[51];					//������
	int y[51];					//Ű
	int d[51];					//��ġ ���

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];

	for (int i = 0; i < n; i++)	//����� 1���� �����ϹǷ� ��� 1�� �ٲ�.
		d[i] = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (x[i] > x[j] && y[i] > y[j])			//i�� j���� ��ġ�� ū ���
				d[j]++;
			else if (x[i] < x[j] && y[i] < y[j])	//j�� i���� ��ġ�� ū ���
				d[i]++;
		}
	}

	for (int i = 0; i < n; i++)
		cout << d[i] << ' ';
	cout << endl;


	return 0;
}