#include <iostream>
using namespace std;

int main()
{
	int n, l;						//n : ������ ��, l: �����Ÿ�
	int a;							//����� ��ġ
	int cnt = 0;					//���� �� �ִ� ������ ��
	int x, y;						//������ x,y ��ǥ
	int dis;						//����� ��ġ ~ ������ ��ġ�� �Ÿ�

	cin >> n >> l;
	cin >> a;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		if (a > x)					//l a-x l + y �� ǥ���ϱ� ���� ���ǹ�
			dis = a - x + y;
		else
			dis = x - a + y;

		if (dis <= l)				//�����Ÿ��� ���ԵǴ� ��� 1����
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}