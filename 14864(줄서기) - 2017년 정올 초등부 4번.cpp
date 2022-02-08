#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m;						//n : �л� ��, m : ������ ��
	vector<int> v;					//�л�1~n���� ����
	vector<int> visited;			//�̹� �湮�� v[i]�� 1�� ����!

	cin >> n >> m;

	v.resize(n + 1);				//n+1��ŭ ũ�⸦ ����.
	visited.resize(n + 1);

	for (int i = 1; i <= n; i++)		//�ε��� ���� ���߾� �л����� ��ȣ�� ���� -> �켱�� �̰��� ī�� ��ȣ�� ��������!
		v[i] = i;

	while (m--)
	{
		int a, b;					//�л� X,Y�� ������� �Է�
		cin >> a >> b;

		v[a]++;						//X��ġ�� ��޵Ǹ� 1�� ����
		v[b]--;						//Y��ġ�� ��޵Ǹ� 1�� ����
	}

	for (int i = 1; i <= n; i++)		//-1�� ����� ����
	{
		if (v[i]<1 || v[i]>n)			//���� v�� ����� ���� 1���� �۰ų� n���� Ŀ����
		{
			cout << "-1" << endl;
			return 0;
		}

		if (visited[v[i]])				//�ߺ��� ���� �ִٸ�
		{
			cout << "-1" << endl;
			return 0;
		}

		visited[v[i]]++;				//���� �� ���� �湮�� ���� ���ٸ� 1 ����!
	}

	for (int i = 1; i <= n; i++)
		cout << v[i] << ' ';

	cout << endl;

	return 0;
}