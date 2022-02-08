#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;						//n : ���� ����, m : ����
	int dis;						//���� ª�� ����
	int ans = 2e9;					//���� ���� ������ ��
	int l = 0, r = 1;				//ù ��°, �� ��° �ε���
	int arr[100001];				//����

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	while (l < n)					//ù ��° �ε����� n-1�� ������ ������ ����
	{
		dis = arr[r] - arr[l];

		if (dis < m)				//dis�� ���ؾ� �ϴ� ��(m)���� ���� ���
		{
			r++;
			continue;
		}
		else if (dis == m)			//dis�� ���ؾ� �ϴ� ��(m)���� ���� ���
		{
			ans = m;
			break;
		}

		ans = min(ans, dis);
		l++;
	}

	cout << ans << endl;

	return 0;
}