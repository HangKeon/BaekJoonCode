#include <iostream>
#include <algorithm>
using namespace std;
//�� �ڵ�� �ð��ʰ���

int gun[100001];				//����� x��ǥ
int x[100001];					//������ x��ǥ
int y[100001];					//������ y��ǥ

int main()
{
	int m, n, l;					//m : ����� ��, n : ������ ��, l : �����Ÿ�
	int cnt = 0;					//���� �� �ִ� ������ ��

	cin >> m >> n >> l;

	for (int i = 0; i < m; i++)
		cin >> gun[i];

	//sort(gun, gun + n);				//gun�� ������������ �迭

	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (x[j] < 0 || y[j] < 0)	//�̹� ������ �� ������ �����ϱ� ���� ����
				continue;

			int d;						//����� ��ġ�� ������ ��ġ ���� �Ÿ�

			if (gun[i] >= x[j])
				d = gun[i] - x[j] + y[j];
			else
				d = x[j] - gun[i] + y[j];

			if (d <= l)					//�̹� i��° ��뿡�� ������ ���� �ߺ��� ���� ���� x,y�� ���� ����
			{
				x[j] = -1;
				y[j] = -1;
				cnt++;
			}
		}
	}

	cout << cnt << endl;
	
	return 0;
}