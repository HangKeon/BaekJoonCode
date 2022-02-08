#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n;							//�̷�� �ִ� ��ȣ
int arr[101];					//��° �ٿ� �� ��ȣ�� ������ �迭 -> �ε����� ù°��
int visited[101];				//�湮
int result[101];				//����Ŭ�� ��� ����
int idx = 0;

void dfs(int x, int y)			//dfs(���� ���, ���� ���)
{
	if (visited[x])				//���� �湮o 
	{
		if(x == y)				//���� ��� = ���۳��->����Ŭ!!
			result[idx++] = y;
	}
	else
	{
		visited[x] = 1;
		dfs(arr[x], y);
	}
}

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		memset(visited, 0, sizeof(visited));
		dfs(i, i);
	}

	//sort(result, result + idx);

	cout << idx << endl;

	for (int i = 0; i < idx; i++)
		cout << result[i] << endl;

	return 0;
}