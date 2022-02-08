#include <iostream>
#include <algorithm>
using namespace std;

int n;						//���� �л� ��
int idx = 1;				//�ӽ� ������ �л� ��ȣ
int temp = -1;				//���� ���̾��� �ִ� �л� ��
int arr[1001][6];			//arr[�л� ��ȣ][�� ��ȣ] = ���� ���̾��� �л� ��ȣ
int arr2[1001];				//�ڽŰ� ���� ���̾��� �л� ���� ����(�ڱ� �ڽ� ����)
int arr3[1001][1001];		//arr[i][j] : i�� ���� ���� �� ���̶� �ִ� �л��� 1�� ����!

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= 5; j++)
			cin >> arr[i][j];

	for (int k = 1; k < 6; k++)
	{
		for (int i = 1; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				//if (i == j)						//�ڱ� �ڽ��� �Ѿ
				//	continue;

				if (arr[i][k] == arr[j][k] && arr3[i][j] != 1)		//i�� j�� ���� ���̾��ٸ� -> arr2[i],arr2[j]�� ����!
				{
					arr2[i]++;
					arr2[j]++;

					arr3[i][j] = 1;
					arr3[j][i] = 1;
				}
			}
		}
	}

	for(int i=1;i<=n;i++)
		if (arr2[i] > temp)
		{
			temp = arr2[i];
			idx = i;
		}

	cout << idx << endl;

	return 0;
}