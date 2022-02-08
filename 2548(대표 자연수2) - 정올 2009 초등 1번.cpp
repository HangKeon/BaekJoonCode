#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;								//�ڿ����� ����
	int a;								//�Է��ϴ� ��
	int sum = 2e9;						//���� ���� ������ ��
	int temp = 0;						//������ ���� �ӽ� ����
	int ans;							//sum�� ����Ǵ� v�� ��
	int arr[20001];						//arr[n] : 0~n���������� v�� ���� ����
	vector<int> v;						//�Է��ϴ� ���� ����

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		v.push_back(a);
	}

	sort(v.begin(), v.end());			//���� ���� ������ؼ�

	for (int i = 0; i < n; i++)
	{
		if (i == 0)						//���� ó�� ��
			arr[i] = v[i];
		else							//�������� ������(prefis sum)
			arr[i] = arr[i - 1] + v[i];	//���� for���� ������� �ʾƵ� �ȴ�!
	}

	for (int i = 0; i < n; i++)
	{
		temp = v[i] * i - arr[i - 1] + (arr[n - 1] - arr[i]) - v[i] * (n - 1 - i);

		if (sum > temp)
		{
			sum = temp;
			ans = v[i];
		}
	}

	cout << ans << endl;

	return 0;
}