#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;						//ī���� ����
	int m;						//������ ��ġ�� ����
	int ans = 0;				//3���� �� �� ���� m�� ����� ��
	int temp;					//�ӽ÷� 3���� ���� ������ ����
	int arr[100001];			//ī��

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				temp = arr[i] + arr[j] + arr[k];

				if (temp <= m)
					ans = max(ans, temp);
			}
		}
	}

	cout << ans << endl;

	return 0;
}