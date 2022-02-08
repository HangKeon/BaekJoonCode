#include <iostream>
using namespace std;

long long dp[1001][1001];					//���� ��

int main()
{
	int r, c, q;							//r,c : ������ ũ��, q : ���� �Ϻκ��� ��� ����� �˾ƺ� ����
	int r1, r2, c1, c2;
	int n;									//��ǥ������ ��Ⱚ
	long long sum = 0;						//������ ��
	int cnt;								//������ ����

	cin >> r >> c >> q;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> n;

			dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1] - dp[i][j] + n;
		}
	}

	for (int i = 0; i < q; i++)
	{
		cin >> r1 >> c1 >> r2 >> c2;

		sum = 0;

		sum = dp[r2][c2] - dp[r1 - 1][c2] - dp[r2][c1 - 1] + dp[r1 - 1][c1 - 1];
		cnt = (r2 - r1 + 1)*(c2 - c1 + 1);

		cout << sum / cnt << "\n";
	}

	return 0;
}