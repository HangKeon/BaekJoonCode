#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, s;					//n : ������ ����, s : ��
	int l, r;					//l : ���� ���� �ε���,  r : �� ���� �ε���
	int sum = 0;				//�κ���
	int cnt = 0;				//���� s�̻��� ����
	int ans = 2e9;				//���� s �̻��� �� �� ���� ª�� ����
	int arr[100001];			//����

	cin >> n >> s;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	l = 0, r = 0;

	while (r<=n)
	{
		if (sum < s)
		{
			sum += arr[r++];
			cnt++;
		}
		else
		{
			ans = min(cnt, ans);
			sum -= arr[l++];
			cnt--;
		}
	}

	if (ans == 2e9)
		cout << 0 << endl;
	else
		cout << ans << endl;

	return 0;
}