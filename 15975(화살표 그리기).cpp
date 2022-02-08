#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;						//���� ����
	int x, y;					//x : ���� ��ǥ, y : ���� ����
	long long sum = 0;			//��ü ������ ��
	vector<int> v[100001];		//v[����] = ��ǥ : ������ �ε����� �� ��ǥ���� �״´�.

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		v[y].push_back(x);
	}

	for (int i = 1; i <= n; i++)
	{
		int size = v[i].size();

		if (size < 2)			//�̰� ������ �ʿ� ���� ��(�ֳ��ϸ� ���ų� 1��)
			continue;

		sort(v[i].begin(), v[i].end());

		for (int j = 0; j < size; j++)
		{
			if (j == 0)						//���� ���� ���� ���
				sum += v[i][j + 1] - v[i][j];
			else if (j == size - 1)			//���� ���� ���� ���
				sum += v[i][j] - v[i][j - 1];
			else							//������
				sum += min(v[i][j + 1] - v[i][j], v[i][j] - v[i][j - 1]);
		}
	}

	cout << sum << endl;

	return 0;
}