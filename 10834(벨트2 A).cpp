#include <iostream>
using namespace std;

int main()
{
	int n;							//��Ʈ�� ����
	int a[1001], b[1002] = { 0, };	//a : ��Ʈ�� ����(0 : �Ȳ��� ����, 1 : ���� ����)
									//b : ������ ����(0 : �ð����, 1 : �ݽð����)
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		if (a[i] == 0)				//�Ȳ��� �����϶�
		{
			if (b[i] == 0)			//�ð�����̶��
				b[i + 1] = 0;
			else					//�ݽð�����̶��
				b[i + 1] = 1;
		}
		else if (a[i] == 1)			//���� �����϶�
		{
			if (b[i] == 0)			//�ð�����̶��
				b[i + 1] = 1;
			else					//�ݽð�����̶��
				b[i + 1] = 0;
		}
	}

	for (int i = 0; i <= n; i++)
		cout << b[i] << ' ';
	cout << endl;

	return 0;
}