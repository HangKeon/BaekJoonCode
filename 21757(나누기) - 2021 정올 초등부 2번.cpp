#include <iostream>
using namespace std;

int n;							//������ ����
int s = 0;						//���� ��ü �� -> �� ���� �� 4�� ���� �� ����!
int arr[100001];				//����
int sum[100001];				//������
int dp[2001][5];
long long c = 0;						//c=3�� ��� 4����� �� ��!
long long cnt = 0;					//������ ����� ����

void divide(int a, int x,int y,int z,int k, int m)		//divide(���۰�, s�� �����ϴ� �ε��� ��ȣ��)
{
	int b = a ;

	while(b--)
	{
		if (c == 3)
		{
			if (sum[a] - sum[0] == s)
			{
				cnt++;
			}

			return;
		}
	
		if (sum[a] - sum[b] == s)
		{
			c++;
			divide(b,x,);
			c--;
			
		}

		//b--;
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];

		s += arr[i];

		sum[i] = sum[i - 1] + arr[i];
	}

	s /= 4;

	divide(n,n,0,0,0,0);

	cout << cnt << endl;


	return 0;
}