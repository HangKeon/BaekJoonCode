#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, sum = 0;										//ī�� ��, �� ��
	vector<int> left;									//���� ī��
	vector<int> right;									//������ ī��
	int j = 0, k = 0;

	cin >> n;

	for (int i = 0; i < n; i++)							//���� ī�带 �Է�
	{
		int lef;
		cin >> lef;

		left.push_back(lef);
	}

	for (int i = 0; i < n; i++)							//������ ī�带 �Է�
	{
		int rig;
		cin >> rig;

		right.push_back(rig);
	}

	while (1)
	{
		if (left[j] > right[k])							//���� ī�� �� > ������ ī�� ��
		{
			sum += right[k];
			k++;
		}
		else if (left[j] < right[k])					//���� ī�� �� < ������ ī�� ��
		{
			j++;
		}
		else											//���� ī�� �� = ������ ī�� ��
		{												//�� �̻� ������ �� ���� ������ (1)������ ����� ������, ���� �� �� ������.
			k++;
			//j++;
		}

		if (j == n || k == n)							//Ż�� ����
			break;
	}

	cout << sum << endl;

	return 0;
}