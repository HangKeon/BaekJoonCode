#include <iostream>
using namespace std;
//�Է��� ���� �Ҽ����� Ȯ��.

int main()
{
	int a=0, n=0;				//n=�Է��ϴ� ��, �� �Ҽ����� Ȯ�� �޴� ��.

	cin >> n;

	for (a = 2; a < n; a++)
	{
		if (n%a == 0)
		{
			cout << n << "�� �Ҽ��� �ƴ�." << endl;
			break;
		}
	}

	if (a == n)
		cout << a << " �� �Ҽ�" << endl;

	

	return 0;
}

//��