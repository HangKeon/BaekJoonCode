#include <iostream>
using namespace std;

int main()
{
	int m;										//��Ʈ�� ����(1<=m<=1000)
	int a, b, s;								//a = i��Ʈ�� ȸ����, b = i+1��Ʈ�� ȸ����, s = i+1��Ʈ�� ���� ȸ������ (0 : �ð����/ 1 : �ݽð����)
	int roll = 0;								//i��Ʈ�� ȸ�� ����
	int count = 1;								//��Ʈ�� ȸ�� ��

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> s;

		if (s == 1)
			roll = 1 - roll;

		count = (count / a)*b;
	}
	cout << roll << " " << count << endl;

	return 0;
}