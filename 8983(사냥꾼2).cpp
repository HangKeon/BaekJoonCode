#include <iostream>
#include <algorithm>
using namespace std;

int gun[100001];						//����� x��ǥ
pair<int, int> p[100001];				//������ ��ǥ

int distance(int x, int a, int b)	//���� ���������� �Ÿ� -> |x-a|+b
{
	if (x > a)
		return (x - a + b);
	else
		return (a - x + b);
}

int main()
{
	int m, n, l;						//m : ����� ��, n : ������ ��, l : �����Ÿ�
	//int idx = 0;						//x�� ������������ ������ ���� �ε����� ���
	int index = 0;						//gun�� �ε����� ���
	int cnt = 0;						//���� �� �ִ� ������ ��

	cin >> m >> n >> l;

	for (int i = 0; i < m; i++)
		cin >> gun[i];

	for (int i = 0; i < n; i++)
		cin >> p[i].first >> p[i].second;

	sort(gun, gun + m);					//��븦 �������� ����
	sort(p, p + n);						//������ ��ġ�� 

	for (int i = 0; i < n; i++)			//������ ��ġ�� �������� ���ɴ�.
	{
		while (index != m - 1 && gun[index + 1] < p[i].first)	//������ ��ġ�� x��(x[i])���� ���ʿ� �ִ� ����� ��ġ �� ���� ����� ��ġ�� ã��.
			index++;									//�׷��� gun[index+1]�� ��ġ�� ���캽.
	
		if (distance(gun[index], p[i].first, p[i].second) <= l)		//������ ��ġ���� ����or ���� x��ǥ�� ��븦 ��
		{
			cnt++;
			continue;
		}

		if (index != m - 1)
		{
			if (distance(gun[index + 1], p[i].first, p[i].second) <= l)		//������ ��ġ���� (����+1)�� ��븦 ��
			{
				cnt++;
				continue;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}