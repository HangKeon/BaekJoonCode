#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;                        //�������� ����

	cin >> n;

	vector<int> v(n + 1);               //�������� ����
	vector<int> sum(n + 1);            //�������� ������ ������

	for (int i = 1; i <= n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());         //�������� ����

	if (v[1] > 1)                  //�� ó������ 1���� ũ�ٸ� 1�� ���
	{
		cout << 1 << endl;

		return 0;
	}

	for (int i = 1; i <= n; i++)
	{
		sum[i] = v[i] + sum[i - 1];

		if (sum[i - 1] + 1 < v[i])      //(i-1)������ ������+1 < v[i]�� ���
		{
			cout << sum[i - 1] + 1 << endl;
			return 0;
		}
	}

	cout << sum[n] + 1 << endl;         //(��� ������+1)


	return 0;
}