#include <stdio.h>

const int MAXDAY = 100;
int dp[MAXDAY + 1][MAXDAY * 2 + 1];									//dp[�ް��ϼ�][��������]
int rest[MAXDAY + 1];												//�ٸ� �������� ����Ʈ�� �� �� ���� ��
int n, m;															//n = �ް� �ϼ�, m = ����Ʈ �� �� ���� �ϼ�

void upd(int i, int j, int v)
{
	if (i > n)
		return;
	if (dp[i][j] == -1)
		dp[i][j] = v;
	if (dp[i][j] > v)
		dp[i][j] = v;

}

int main()
{
	int x;															// x = ����Ʈ �� �� ���� ��
	int i, j;

	scanf_s("%d %d", &n, &m);

	for (i = 1; i <= n; i++)
		rest[i] = 1;												//��� �ް� �ϼ��� 1�� ����

	for (i = 0; i < m; i++)
	{
		scanf_s("%d", &x);
		rest[x] = 0;												//����Ʈ ���� ���ϴ� ���� rest �迭�� 0�� ����
	}

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n * 2; j++)
			dp[i][j] = -1;

	dp[0][0] = 0;													//���� ó�� �ް��� �����ϱ� ���� �ƹ��͵� �������� �ʾұ⿡ 0�� ����

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i * 2; j++)
		{
			if (dp[i][j] == -1)
				continue;

			if (rest[i + 1] == 0)									//����Ʈ�� �� �� ���� ���� ���
				upd(i + 1, j, dp[i][j]);

			if (j >= 3)												//���� ������ 3�� �̻��� ���
				upd(i + 1, j - 3, dp[i][j]);

			upd(i + 1, j, dp[i][j] + 10000);									//1�ϱ�

			upd(i + 1, j + 1, dp[i][j] + 25000);									//3�ϱ�
			upd(i + 2, j + 1, dp[i][j] + 25000);
			upd(i + 3, j + 1, dp[i][j] + 25000);

			upd(i + 1, j + 2, dp[i][j] + 37000);									//5�ϱ�
			upd(i + 2, j + 2, dp[i][j] + 37000);
			upd(i + 3, j + 2, dp[i][j] + 37000);
			upd(i + 4, j + 2, dp[i][j] + 37000);
			upd(i + 5, j + 2, dp[i][j] + 37000);

		}
	}

	int ans = dp[n][0];
	for (j = 1; j <= n * 2; j++)
		ans = (ans > dp[n][j]) ? dp[n][j] : ans;

	printf("%d\n", ans);

	return 0;
}