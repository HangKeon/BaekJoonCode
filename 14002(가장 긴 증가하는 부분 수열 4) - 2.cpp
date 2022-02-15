#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;							//������ ũ��
	int arr[1001];					//����
	int dp[1001];					//LIS�� ����
	vector<int> v[1001];			//�� LIS�� �̷�� ����
	vector<int> ans;				//LIS�� ���� �� ����

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;								//�ڱ� �ڽ��� ���� 
		v[i].push_back(arr[i]);					//�ڱ� �ڽ��� ����

		for (int j = 0; j < i; j++)
			if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;

				v[i].clear();					//����
				v[i] = v[j];					//���±����� ���� ����
				v[i].push_back(arr[i]);			//�ٽ� �ڱ� �ڽ��� �������� �߰�
			}

		//ans = max(ans, dp[i]);
		
		if(ans.size()<v[i].size())				//LIS�� ������ �� ũ�� �ٲ�
			ans = v[i];
	}

	cout << ans.size() << endl;

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';

	return 0;
}