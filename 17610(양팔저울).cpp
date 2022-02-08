#include <iostream>
#include <algorithm>
using namespace std;

int k;							//���� ����
int sum = 0;					//��� ���� ������ ��
int g[14];						//���� ���Ը� ������ �迭
int visited[200000 * 13 + 1];	//���� �� �ִ� ���Ե��� ��� ǥ�� -> 1 : ���� �� �ִ� ����, 0 : ���� �� ���� ����

void dfs(int c, int result)		//dfs(���� ������ ����, ���� �� �ִ� ���� ����)
{
	if (c > k)					//Ż������
		return;

	if (c == k)	
		if(result >= 1)				//�������� 1 ~ sum������� ��
			visited[result] = 1;	//�湮ó��

	dfs(c + 1, abs(result - g[c]));
	dfs(c + 1, result);
	dfs(c + 1, result + g[c]);
}

int main()
{
	int cnt = 0;				//������ ������ ���

	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> g[i];
		sum += g[i];
	}


	dfs(0, 0);

	for (int i = 1; i <= sum; i++)	
		if (!visited[i])
			cnt++;

	cout << cnt << endl;

	return 0;
}