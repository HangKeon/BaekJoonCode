#include <iostream>
#include <algorithm>
using namespace std;

struct rec
{
	long long x1, x2, y1, y2;
};

int main()
{
	struct rec p, q;

	cin >> p.x1 >> p.y1 >> p.x2 >> p.y2;			//�簢�� p�� ��ǥ �Է�
	cin >> q.x1 >> q.y1 >> q.x2 >> q.y2;			//�簢�� q�� ��ǥ �Է�

	if (p.x1 == q.x2 || p.x2 == q.x1)				//���� p,q�� x1,x2�� ���ų� x2,x1�� ���� ��
	{
		if (p.y1 == q.y2 || p.y2 == q.y1)			//p,q�� y1,y2�� ���ų� y2=y1�� ���ٸ�
			cout << "POINT\n";
		else if ((p.y2 - p.y1) + (q.y2 - q.y1) > max(q.y2 - p.y1, p.y2 - q.y1))	//�簢�� p,q�� ������ �� > |q�� ���� ���� y��ǥ - p�� ���� ���� ��ǥ|
			cout << "LINE\n";
		else
			cout << "NULL\n";
	}
	else if ((p.x2 - p.x1) + (q.x2 - q.x1) > max(q.x2 - p.x1, p.x2 - q.x1))	//p,q�� ������ �� > |q�� ���� �����ʿ� �ִ� x��ǥ - p�� ���� ������ �ִ� ��ǥ|
	{
		if (p.y1 == q.y2 || p.y2 == q.y1)			//p,1�� y1,y2�� ���ų� y2,y1�� ���ٸ�
			cout << "LINE\n";
		else if ((p.y2 - p.y1) + (q.y2 - q.y1) > max(q.y2 - p.y1, p.y2 - q.y1))	//p,q�� ������ �� > |���� ���� y��ǥ - ���� ���� y��ǥ|
			cout << "FACE\n";
		else
			cout << "NULL\n";
	}
	else
		cout << "NULL\n";




	return 0;
}