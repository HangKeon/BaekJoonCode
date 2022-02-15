#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1000001];						//����
int dp[1000001];						//LIS�� ���� �����ϴ� �迭

int main()
{
	int n;								//������ ũ��
	int j = 0;							//dp�� �ε��� -> LIS�� ũ��
	int s = 0, e, mid;					//s : ���� �ε���, e : dp�� �� �ε���, mid : �߰� �ε���

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	dp[0] = arr[0];						//���� �� ó�� ���� arr[0]�� ����

	for (int i = 1; i < n; i++)
	{
		if (dp[j] < arr[i])				//LIS �����ϴ� ���
		{
			j++;
			dp[j] = arr[i];
		}
		else							//LIS�� �������� �ʴ� ��� -> ���� ���� ������ ���
		{
			s = 0, e = j;

			while (s <= e)				//�̺�Ž������ ��� ���� ���� �ٲ��ش�
			{
				mid = (s + e) / 2;
				
				if (dp[mid] >= arr[i])
					e = mid - 1;
				else
					s = mid + 1;
			}

			dp[s] = arr[i]; //dp[e+1]=arr[i];
		}
	}

	cout << j + 1;

	return 0;
}