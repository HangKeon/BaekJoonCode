#include <iostream>
using namespace std;

int distance(int x, int a, int b)	//distance(����� ��ġ, ������ x��ǥ, ������ y��ǥ) -> ���� ���������� �Ÿ�
{
	if (x > a)
		return (x - a + b);
	else
		return (a - x + b);
}

int main()
{
	int m, n, l;						//m : ����� ��, n : ������ ��, l : �����Ÿ�
	int gun[10001];						//����� ��ġ
	int x, y;							//������ ��ġ
	int dis;							//������ ��ġ ~ ����� �Ÿ�
	int cnt = 0;						//�� ��밡 ���� ������ ���� ��

	cin >> m >> n >> l;

	for (int i = 0; i < m; i++)
		cin >> gun[i];

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		for (int j = 0; j < m; j++)				//�Է��� ������ ��ǥ(x,y)�� ����� ��ǥ�� �ٷ� ��
		{
			dis = distance(gun[j], x, y);

			if (dis <= l)
				cnt++;
		}
	}

	cout << cnt << endl;


	return 0;
}