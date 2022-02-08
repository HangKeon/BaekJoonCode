#include <iostream>
using namespace std;

int parent[100001];					//�̰��� ����Ű�� ����Ʈ�� ����

int find(int x) 
{
	if (parent[x] == x)
		return x;
	else
		return parent[x] = find(parent[x]);
}

void Union(int a, int b)
{
	a = find(a);
	b = find(b);

	parent[a] = b;				//a > b
}

int main()
{
	int g, p;						//g :  ����Ʈ ����, p : ����� ����
	int a;
	int cnt = 0;					//��ŷ��ų �� �ִ� ����� ��

	cin >> g >> p;

	for (int i = 1; i <= g; i++)	//parent �迭 �ʱ�ȭ
		parent[i] = i;

	for (int i = 1; i <= p; i++)
	{
		cin >> a;

		int par = find(a);

		if (par == 0)			// 0���� ���ٴ� ���� ��ŷ ������ ����Ʈ�� ���ٴ� ���� �ǹ�
			break;
		
		// ��ŷ�Ϸ��� ����Ʈ�� �θ� ��尡 0�� �ƴ϶�� �ش� ����Ʈ�� ��ŷ�Ǿ�����
		//���� �׺��� ���ڰ� ���� ����Ʈ�� ��ŷ�� ������ ������ �ǹ�
		cnt++;
		Union(par, par - 1);
	}

	cout << cnt << endl;


	return 0;
}