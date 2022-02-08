#include <iostream>
#include <cstring>						//memeset�� ���ؼ� ���
using namespace std;

int arr[101][101];						//arr[i][j] : i���� j�� ����Ǿ� ������ 1, ������ 0�� ����
int visited[101] = { 0, };				//visited[k] : k�� �湮������ 1, ������ 0�� ����
int n;									//����� ����

void dfs(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (arr[i][j] && !visited[j])	//arr�� 1�̰� visited�� 0�� ��� -> ��, ���� �湮���� ���� ���
		{
			visited[j]++;				//i���� j�� �湮�� ������ �ٲٰ�
			dfs(j);						//j�� �̵�
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];

	for (int i = 1; i <= n; i++)
	{
		memset(visited, 0, sizeof(visited));	//visited�� �� �� ���� ���� 0���� �ʱ�ȭ
		dfs(i);

		for (int j = 1; j <= n; j++)
		{
			if (visited[j])					//j�� �湮�� ���
				arr[i][j] = 1;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}




	return 0;
}