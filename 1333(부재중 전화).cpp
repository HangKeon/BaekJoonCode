#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, l, d;						//n : �뷡 ��, l : ��� �뷡 ����, d : ��ȭ�� ����
	int bell = 0;						//��ȭ���� �鸮�� �ð�
	vector<int> v;						//�뷡�� ����Ǵ� ����(1 : �뷡 ��� ��, 0 :�뷡�� �� �鸲)

	cin >> n >> l >> d;

	while (n--)
	{
		for (int i = 0; i < l; i++)		//������ ������� ���
			v.push_back(1);

		for (int i = 0; i < 5; i++)		//������ ���� ���
			v.push_back(0);
	}

	while (1)
	{
		bell += d;

		if (v[bell] == 0)				//�뷡 ���� ���ݿ��� ���� �︮�� ���
			break;

		if (bell > v.size())			//�뷡�� ��� ���� �� ���� �︮�� ���
			break;
	}

	cout << bell << endl;

	return 0;
}