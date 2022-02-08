#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;							//�Է��� ������ ���� 
	int Max = 0;					//���� �� �����ϴ� �κ� ������ ����
	int arr[1001];					//�Է��ϴ� ����
	int dp[1001] = { 0, };			//dp[i] : arr[i]�� ������ ���� ���ڵ��� ���� + 1(�ڱ��ڽ�)
	vector<int> v[1001];			//LIS�ϴ� ������ �����ϴ� �迭
	vector<int> ans;				//���� �� LIS�� �����ϴ� �迭

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;					//�ڱ��ڽ�
		v[i].push_back(arr[i]);		//���� �ڱ� �ڽ��� �ִ´�. -> �Ʒ� for���� ���� �ȵǰų� �ڱ⺸�� ���� ���� ���� ���� �����Ƿ�

		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
				if (dp[i] < dp[j] + 1)
				{
					v[i].clear();
					v[i] = v[j];				//v[i]�� v[j]�� ����
					v[i].push_back(arr[i]);
					dp[i] = dp[j] + 1;
				}
		}

		if (ans.size() < v[i].size())			//ans�� v[i]���� ����
			ans = v[i];		
	}

	cout << ans.size() << endl;

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << ' ';

	return 0;
}