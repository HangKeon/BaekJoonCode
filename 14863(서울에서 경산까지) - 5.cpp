#include  <iostream>
using namespace std;

int a[101][4];							//�����ð�, ���� ��ݾ�, ������ �ð�, ������ ��ݾ�
int dp[101][100001] = { 0, };					//a[��������][�ɸ��� �ð�]


int main()
{
	int n, k;
	int t = 0, time = 0, cnt;				//t = t��° ����, time = �ɸ��� �ð�, cnt = ����, ������ �� �� k�� �Ѿ������ �Ǵ����� ����
	int max = 0, total = 1;						// max = �ִ� ��ݾ�, total = �ǵ��� �� ��� 0���� �ٲ�

	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];

	while (1)
	{
		int temp1, temp2;				//a[t][1], a[t][3]�� �ӽ� ������ ����
		int s = 1;						//a[t][1] < a[t][3]�̶�� ������ ������� ���� ��� s=1�� ����

		temp1 = a[t][1];
		temp2 = a[t][3];
		cnt = 2;

		if (total == 0)						//�������� �ǵ��� �� ���
		{
			if (a[t][1] < a[t][3])			//���ư��� ���� a[t][3]���� ��������Ƿ� �̹����� a[t][1]�� ����ؾ� �Ѵ�.	
			{
				a[t][3] = 0;				//���� a[t][3]�� 0�� ���������ν� �ٽ� ���		
			}
			else							//���ư��� ���� a[t][1]���� ��������Ƿ� �̹����� a[t][3]�� ����ؾ� �Ѵ�.
			{
				a[t][1] = 0;				//���� a[t][1]�� 0�� ���������ν� �ٽ� ���	
			}

			total = 1;
		}

		if (a[t][1] < a[t][3])				//���� ��ݾ� < ������ ��ݾ�
		{


			time += a[t][2];
			dp[t][time] += a[t][3];

			if (t > 0)						//t>0�� ���
				dp[t][time] += dp[t - 1][time - a[t][2]];		//���� ������ �ִ� money�� ����

			if (time > k)					//time�� k���� ū ���
			{
				time -= a[t][2];
				dp[t][time] -= a[t][3];
				cnt--;
				a[t][3] = 0;
			}
		}

		if (a[t][1] >= a[t][3])				//���� ��ݾ� >= ������ ��ݾ�
		{
			time += a[t][0];
			dp[t][time] += a[t][1];

			if (t > 0)						//t>0�� ���
				dp[t][time] += dp[t - 1][time - a[t][0]];		//���� ������ �ִ� money�� ����

			if (time > k)					//time�� k���� ū ���
			{
				time -= a[t][0];
				dp[t][time] -= a[t][1];
				cnt--;
				a[t][1] = 0;
			}
		}

		if (s == 1)
		{
			a[t][3] = temp2;

			if (a[t][1] < a[t][3])				//���� ��ݾ� < ������ ��ݾ�
			{
				time += a[t][2];
				dp[t][time] += a[t][3];

				if (t > 0)						//t>0�� ���
					dp[t][time] += dp[t - 1][time - a[t][2]];		//���� ������ �ִ� money�� ����

				if (time > k)					//time�� k���� ū ���
				{
					time -= a[t][2];
					dp[t][time] -= a[t][3];
					cnt--;
					a[t][3] = 0;
				}
			}
		}
		a[t][1] = temp1;
		a[t][3] = temp2;

		if (cnt <= 0)						//cnt=0�� ���
		{
			t--;							//������ �ϳ� �ڷ� ������
			continue;
		}

		if (t == n - 1)						//������ ������ ������ ���
			if (max < dp[t][time])			//max < dp[t][time]
			{
				max = dp[t][time];
				break;
			}

		t++;								//�� ����� ��쿡�� ����t�� ����
	}

	cout << max << endl;


	return 0;
}