#include <iostream>
#include <vector>
using namespace std;
#define MAX_VALUE 1000001

vector<int> v;

int count(long long int x)
{
	int cnt = 1;
	int temp = x;
	while (x != 1)
	{
		if (x % 2 == 0)
			x /= 2;
		else
			x = 3 * x + 1;

		if (x < MAX_VALUE && v[x] != 0)		//�̹� ����� ���� �ִ� �� -> ��, dp�� �޸�������̼��� �ٽɺκ�!
		{
			v[temp] = v[x] + cnt;			//�̹� ����ߴ� ��(v[x])�� �̿��� ���ο� ��(v[temp])�� ���� ���Ѵ�.
			return v[temp];
		}

		cnt++;
	}

	v[temp] = cnt;
	return cnt;
}


int main()
{
	int cnt, i, j, max = -1, result;	//cnt = ����Ŭ ����, i,j = ���� & ����, max = �ִ밪, result

	for (int i = 0; i < MAX_VALUE; i++)	//ó�� ��� v���� 0���� �ʱ�ȭ
	{
		v.push_back(0);
	}

	cin >> i >> j;

	for (int n = i; n <= j; n++)			//i�� j ������ ��� ������ �ִ� ����Ŭ ���̸� �˾ƺ��� ���� �ݺ���
	{
		cnt = count(n);					//cnt�� count�Լ� ����

		if (max < cnt)					//���� max < cnt ���
		{
			max = cnt;					//max�� cnt ����
			result = n;
		}
	}

	cout << i << " " << j << " " << max << endl;

	return 0;
}



//��� �̰� dp����! �׷��� ������ ���߿� �ٽ� Ǯ���!
/*int main()
{
	int n, num, i, j, max = -1, cnt;

	cin >> i >> j;

	for (int n = i; n <= j; n++)
	{
		cnt = 1;
		num = n;
		while (num != 1)
		{
			if (num % 2 == 0)
				num /= 2;
			else
				num = 3 * num + 1;
			cnt++;
		}

		if (max < cnt)
			max = cnt;
	}

	cout << i << ' ' << j << ' ' << max << endl;

	return 0;
}*/