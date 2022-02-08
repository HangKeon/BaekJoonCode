#include <iostream>
using namespace std;

int arr[100001];

void dfs(int s, int e)			//dfs(���� ���, �� ���)
{
	if (s == e)					//Ż������
		return;

	if (s == e - 1)				//�� ��� == ������ ���� ��ȸ ���
	{
		cout << arr[s] << endl;
		return;
	}

	int k = s + 1;

	while (1)
	{
		if (!(k < e && arr[k] < arr[s]))
			break;

		k++;
	}

	dfs(s + 1, k);
	dfs(k, e);

	cout << arr[s] << endl;
}

int main()
{
	int n;						//���� ��ȸ �Է�
	int idx = 0;				//���� ��ȸ ���� �����ϴ� �ε��� -> ����

	while (cin >> n)
	{
		arr[idx++] = n;
	}

	dfs(0, idx);

	return 0;
}