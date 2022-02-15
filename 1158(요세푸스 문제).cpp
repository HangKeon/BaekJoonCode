#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n, k;					// n : ��� ��, k : ����
	int temp;					//�ӽ� ����
	queue<int> q;				//����� ���� ����

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << '<';

	while (1)
	{
		for (int i = 0; i < k - 1; i++)		//k��° ����� ã�� ���� (k-1)�� �ѱ�
		{
			temp = q.front();
			q.pop();
			q.push(temp);
		}

		cout << q.front();
		q.pop();

		if (!q.size())						//q�� �ƹ��� ������ Ż��
			break;

		cout << ", ";
	}

	cout << '>';

	return 0;
}