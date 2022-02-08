#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int visited[100001];				//�湮�ߴ��� Ȯ��

int main()
{
	int n, m;						//n : �л���, m : ������ ��
	int a, b;

	cin >> n >> m;

	for (int i = 0; i <= n; i++)	//�л� ��ȣ�� ���� �ִ� ī��� �ΰ� ��������
		v.push_back(i);

	while (m--)
	{
		cin >> a >> b;
		v[a]++;						//�տ� ���� �л��� ī�� ��ȣ ����
		v[b]--;						//�ڿ� ���� �л��� ī�� ��ȣ ����
	}

	for (int i = 1; i <= n; i++)
	{
		if (v[i] <= 0 || v[i] > n)	//1~n�� ������ �ƴ� ���
		{
			cout << "-1" << endl;
			return 0;
		}

		if (visited[v[i]])			//�̹� �������� v[i]�� ���� ���
		{
			cout << "-1" << endl;
			return 0;
		}

		visited[v[i]] = 1;			//�湮ó��
	}

	for (int i = 1; i <= n; i++)
		cout << v[i] << ' ';

	cout << endl;


	return 0;
}