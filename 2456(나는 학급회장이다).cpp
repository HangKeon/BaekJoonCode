#include <iostream>
#include <algorithm>
using namespace std;

//Ʋ�� �ڵ�

int main()
{
	int n;							//�л� ��
	int idx = 0;					//������ �ĺ� ��ȣ(���� ���ϴ� ��� = 0)
	int max_score = -1;				//�ְ� ����
	int sw = 0;						//0 : ȸ���� ������ �� ���� ���, 1 : ȸ���� ������ ���
	int sw2 = 0;					//0 : ȸ���� ������ �� ���� ���, 1 : ȸ���� ������ ���
	int arr[1001][4];				//arr[�л� ��][�ĺ� ��ȣ] = ����
	int arr2[4][4] = { 0 };			//arr2[�ĺ� ��ȣ][0 : �� ����, 1~3] = ���� ���� Ƚ��

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 1; j <= 3; j++)
		{
			cin >> arr[i][j];

			arr2[j][arr[i][j]]++;			//���� ���� �� Ƚ�� 1����

			arr2[j][0] += arr[i][j];		//�� ����
		}

	for (int i = 1; i < 3; i++)
	{
		for (int j = i + 1; j <= 3; j++)
		{
			if (max_score <= arr2[i][0])					//max_score���� ū ��츸 ���캸��!
			{
				if (arr2[i][0] > arr2[j][0])				//i�� ���� > j�� ����
				{
					idx = i;
					max_score = arr2[i][0];
				}
				else if (arr2[i][0] < arr2[j][0])			//i�� ���� < j�� ����
				{
					idx = j;
					max_score = arr2[j][0];
				}
				else										//i�� ���� = j�� ����
				{
					for (int k = 3; k > 0; k--)				//1~3�� ����
					{
						if (arr2[i][k] > arr2[j][k])		//i�� k�� > j�� k��
						{
							idx = i;
							max_score = arr2[i][0];
							break;
						}
						else if (arr2[i][k] < arr2[j][k])	//i�� k��< j�� k��
						{
							idx = j;
							max_score = arr2[j][0];
							break;
						}
					}
				}
			}
		}
	}

	//�� �κ� �̿ϼ�
	if (sw || sw2)
	{
		cout << idx << ' ' << max_score << endl;
		return 0;
	}
	else					//ȸ�� ������ ���� ���
	{
		idx = 0;

		for (int i = 1; i <= 3; i++)	//�ְ� ���� �� �� ����
			max_score = max(max_score, arr2[i][0]);
	}

	cout << idx << ' ' << max_score << endl;


	return 0;
}