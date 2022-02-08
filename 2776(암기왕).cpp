#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;						//�׽�Ʈ���̽� ����
	int n;					//��ø1/��ø2�� ����� ������ ����

	cin >> t;

	while (t--)
	{
		vector<int> v1, v2;		//��ø1,2�� ����� ����! -> n,m�� �鸸���� �����ϹǷ� ���ͷ� ����!(�Ź� �ʱ�ȭ �ʿ��ϹǷ�)
		int tmp;				//v1,v2�� ���� �ӽ÷� �Է��� ����

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;

			v1.push_back(tmp);
		}

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> tmp;

			v2.push_back(tmp);
		}

		sort(v1.begin(), v1.end());		//�̺�Ž���� ���� v1�� �������� ����!

		for (int i = 0; i < n; i++)
		{
			int flag = 0;				//0 : ��ø1�� ���� ���, 1 : ��ø1�� �ִ� ���
			int low = 0;				//v2�� ���� ���ʿ� �ִ� �ε���
			int high = n - 1;			//v2�� ���� �����ʿ� �ִ� �ε���
			int mid;					//v2�� ���� v1�� �ε���

			while (low <= high)
			{
				mid = (low + high) / 2;


				if (v2[i] == v1[mid])		//v2�� v1�� ���� ���� �ִٸ�
				{
					flag = 1;
					break;
				}
				else if (v2[i] > v1[mid])	//v2�� ���� ���� v1���� ũ�ٸ�
					low = mid + 1;
				else						//v2�� ������ ���� v1�� ũ�ٸ�
					high = mid - 1;
			}

			cout << flag << "\n";
		}
	}

	return 0;
}