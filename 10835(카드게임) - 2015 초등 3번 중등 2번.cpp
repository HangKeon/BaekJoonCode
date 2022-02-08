#include <iostream>
#include <algorithm>
using namespace std;

int A[2001], B[2001], dp[2001][2001];	//A : ���� ī���� ���� ����, B : ������ ī���� ���� ����
										//dp[���� ���� ī�� ��][���� ������ ī���] : �ִ밪�� ���� -> 0�ΰ��� �湮x!

int card(int a, int b)					//card(�־��� ���� ī�� ��, �־��� ������ ī�� ��)
{
	if (a == 0 || b == 0)				//ī���� ���� 0�� �Ǹ� ������
		return 0;

	if (dp[a][b] != 0)					//dp�� 0�� �ƴ϶�� -> ��, �̹� �湮�ߴٸ�
		return dp[a][b];				//���� dp�� ��ȯ

	dp[a][b] = max(card(a - 1, b), card(a - 1, b - 1));	//���ʸ� �� ��� �� ��� �� ��� �� �ִ밪�� ����!

	if (A[a] > B[b])					//���� ī���� �� > ������ ī���� �� 
		dp[a][b] = max(dp[a][b], card(a, b - 1) + B[b]);	//����(1)�� ���� dp�� ������ ī�带 �� �� ���� ������ ���� �� �� �ִ밪�� dp�� ����!

	return dp[a][b];

}

int main()
{
	int n;							//�� ������ ī�� ����

	cin >> n;

	for (int i = 1; i <= n; i++)		//�־��� ī�� ���� �򰥸��� �ʵ��� �ε����� 1���� �ִ´�.
		cin >> A[i];

	for (int i = 1; i <= n; i++)
		cin >> B[i];

	int ans = card(n, n);

	cout << ans << endl;

	return 0;
}