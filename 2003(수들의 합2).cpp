#include <iostream>
using namespace std;

int main()
{
	int n;						//���� ����
	int m;						//���ϴ� ��
	int sum = 0;					//arr[l]+arr[r]
	int cnt = 0;				//m�� �����ϴ� ����
	int l = 0, r = 0;			//ù ��°, �� ��° �ε���
	int arr[10001];				//����

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	while (r <= n)
	{
		if (sum < m)
			sum += arr[r++];
		else if (sum > m)
			sum -= arr[l++];
		else
		{
			cnt++;
			sum += arr[r++];
		}
	}

	cout << cnt << endl;

	return 0;
}