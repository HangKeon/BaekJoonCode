#include <iostream>
#include <algorithm>
using namespace std;
//2000�� �ߵ�� 1��

int main()
{
	int n;						//��ǰ�� ��ȣ, 1 ~ n������ ����
	int m;						//� ��ǰ�� �ϼ��ϴµ� �ʿ��� ��ǰ�� ���� ���踦 ��Ÿ���� ���� ����
	int x, y, k;				//�߰� ��ǰ�̳� ����ǰ X�� ����µ� �߰� ��ǰ Ȥ�� �⺻ ��ǰ Y�� K�� �ʿ��ϴ�
	int flag = 1;
	int arr[101] = { 0, };		//���� ������ ������ �迭
	int arr2[101] = { 0, };		//�⺻ ��ǰ�� ã�� ���� �迭 -> 0 : �⺻��ǰ
	int v[101][101] = { 0, };	//v[x][y]=k

	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> x >> y >> k;
		
		arr2[x] = 1;					//x�� �� ���̶� ��޵� �͵��� �⺻ ��ǰ�� �ƴϹǷ� arr2�� 1�� ����

		v[x][y] = k;
	}
	
	for (int i = 1; i < n; i++)
		arr[i] = v[n][i];				//���� ��ǰ n�� ����� �߰� or �⺻ ��ǰ���� arr�� ����!

	while (flag)						//���� �� �ݺ��ϱ� ���ؼ� flag�� ���!
	{
		flag = 0;

		for (int i = 1; i < n; i++)
		{
			if (arr[i] != 0 && arr2[i] == 1)
			{
				flag = 1;

				for (int j = 1; j < n; j++)
					arr[j] += v[i][j] * arr[i];

				arr[i] = 0;				//�ٸ� ��ǰ��� ����Ǿ� �ִ� ��� ������ ���� �ʱ� ���� 0���� �ʱ�ȭ
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (!arr2[i])
		{
			cout << i << ' ' << arr[i] << endl;
		}
	}

	return 0;
}