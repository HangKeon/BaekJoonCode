#include <iostream>
using namespace std;

int n, k;									//n = ������ ����, k = �ִ� �ð�
int dp[101][100001] = { 0, };				//dp[����][�ɸ��� �ð�] = ��ݾ�
int time[101][2], money[101][2];			//[����][����/������] -> �ɸ��½ð�, ��ݾ� �� ���� �迭�� ����

int dfs(int cnt, int t, int m)				//dfs(������ ����, �ɸ��� ���� �ð�, ���� ��ݾ�)
{
	if (t > k)								//���� �����ð� > k ��� -> Ż������
		return -1;							//-1�� ��ȯ

	if (cnt == n && t <= k)					//���� ���� = n �̸鼭 �ɸ��� �ð� <= k
		return m;							//m�� ��ȯ -> �츮�� ���ؾ� �ϴ� �ִ� �ݾ�

	if (dp[cnt][t] != 0)					//���� dp�� �ʱⰪ�� �ƴ� ���
		return dp[cnt][t] + m;				//dp�� ���� ���� ��ݾ��� ���Ѵ�.

	int val = -1;
	int temp = dfs(cnt + 1, t + time[cnt + 1][0], m + money[cnt + 1][0]);

	if (val < temp)		//������ ��ݾ��� �� ū ���
		val = temp;

	temp = dfs(cnt + 1, t + time[cnt + 1][1], m + money[cnt + 1][1]);

	if (val < temp)		//�������� ��ݾ��� �� ū ���
		val = temp;

	if (val == -1)
		dp[cnt][t] = -1;
	else
		dp[cnt][t] = val - m;

	return val;
}



int main()
{
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		cin >> time[i][0] >> money[i][0] >> time[i][1] >> money[i][1];

	int ans = dfs(1, time[1][0], money[1][0]);							//ans = ����1~n���� ������ ������ �ִ� ��ݾ��� ����

	int temp = dfs(1, time[1][1], money[1][1]);

	if (ans < temp)							//���� asn���� ����1~n������ ������ �������� �ִ� ��ݾ��� Ŭ ��� 
		ans = temp;

	cout << ans << endl;






	return 0;
}