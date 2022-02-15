#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int k, n;					//k : �̹� ���� ���� ��, n : �ʿ��� ���� ��
	long long s = 1, e = 0;			//s : ���۰�, e : ����
	long long mid;					//���� ����
	long long sum = 0;			//���� �� �ִ� ���� ����
	long long mx = 0;					//�ִ� ���� ����
	long long arr[10001];				//������ �ִ� ������ ���̸� �����ϴ� �迭

	cin >> k >> n;

	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];

		e = max(e, arr[i]);
	}

	while (s <= e)
	{
		mid = (s + e) / 2;
		sum = 0;

		for (int i = 0; i < k; i++)
			sum += (arr[i] / mid);

		if (sum < n)					//������ ���ڶ�� ���
		{
			e = mid - 1;
			continue;
		}
		else
		{
			s = mid + 1;
		}		

		mx = max(mx, mid);
	}

	cout << mx << endl;

	return 0;
}