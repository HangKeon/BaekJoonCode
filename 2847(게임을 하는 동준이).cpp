#include <iostream>
using namespace std;

int main()
{
	int n;							//���� ��
	int v[101];						//���� �� ��� ������ ����
	int cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (int i = n - 2; i >= 0; i--)
	{
		if (v[i] >= v[i + 1])
		{
			int dis = v[i] - v[i + 1] + 1;		//(v[i]�� v[i+1]�� �� + 1) �� ��ŭ�� ���־�� �Ѵ�.
			v[i] = v[i + 1] - 1;
			cnt += dis;
		}
	}

	cout << cnt << endl;

	return 0;
}