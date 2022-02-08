#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[101];						//�ش� ��ġ������ ���� ���� ��ġ�� �� �ִ� ������ ����

int main()
{
	vector<pair<int, int> > v;		//�� �ٿ� ����� ������ A,B�� ��ȣ
	int n;							//�������� ����
	int a, b;						//�������� ��ȣ
	int ans = 0;					//������ ���� �ִ� ������ ����
	
	cin >> n;

	v.push_back({ 0,0 });			//v[0]={0,0}���� ���� v[1]���� �����ϵ��� ��

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		v.push_back({ a,b });
	}

	sort(v.begin(), v.end());

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[i].second > v[j].second)
			{
				if (dp[j] >= dp[i])
				{
					dp[i] = dp[j] + 1;
				}
			}
		}

		ans = max(ans, dp[i]);
	}

	cout << n - ans << endl;


	return 0;
}