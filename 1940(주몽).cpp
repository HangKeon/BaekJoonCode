#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;						//����� ����
	int m;						//������ ����µ� �ʿ��� ��
	int l, r;					//�ε����� ù ��°, ������
	int sum = 0;				//m�� �����ϴ� ��
	int cnt = 0;				//���� �� �ִ� ������ ����
	int arr[15001];				//������ ��ȣ ����

	cin >> n >> m;

	l = 0;
	r = n - 1;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	while (l < r)
	{
		sum = arr[l] + arr[r];

		if (sum < m)
			l++;
		else if (sum > m)
			r--;
		else
		{
			cnt++;
			l++;
			r--;
		}
	}

	cout << cnt << endl;

	return 0;
}