#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001];				//���ӵ� LIS�� ������ ����

int main()
{
	int n;						//���̵��� ��
	int a;						//���̵� ��ȣ
	int ans = 0;				//�ִ� LIS�� ũ��
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		dp[a] = dp[a - 1] + 1;	//a���� �տ� �ִ� dp�� ���� + 1

		ans = max(ans, dp[a]);
	}

	cout << n - ans << endl;

	return 0;
}