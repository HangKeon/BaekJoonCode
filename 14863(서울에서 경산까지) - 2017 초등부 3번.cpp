#include <iostream>
#include <algorithm>
using namespace std;
//�ð��ʰ�
int n, k;							//n : ������ ������ ������ ����,  k : ���� �� �ִ� �ð�
int money;							//��ݾ��� �ִ��� ����
int arr[101][4];					//n<=100�̰�, ������� ���� �ð�, ���� ��ݾ�, ������ �ð�, ������ ��ݾ�

void dfs(int idx, int t, int m)		//dfs(��� ����, �ð�, ��ݾ�)
{
	if (t > k)
		return;

	if (idx == n)
	{
		money = max(money, m);

		return;
	}
	
	dfs(idx + 1, t + arr[idx][0], m + arr[idx][1]);
	dfs(idx + 1, t + arr[idx][2], m + arr[idx][3]);

}

int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 4; j++)
			cin >> arr[i][j];

	dfs(0, 0, 0);

	cout << money << endl;

	return 0;
}