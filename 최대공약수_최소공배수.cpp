#include <iostream>
using namespace std;

int main()
{
	int a, b;										//�Է� ���� �� ��
	int gcm, lcm;									//�ִ�����, �ּҰ����
	int div, quo, rest;								//�������� ��, ��, ������

	cin >> a >> b;

	div = a;
	quo = b;

	while(1)
	{
		quo = a / b;
		rest = a % b;

		if (rest == 0)
		{
			gcm = b;
			lcm = (a*b) / gcm;

			cout << "�ִ����� : " << gcm << endl;
			cout << "�ּҰ���� : " << lcm << endl;
			break;
		}

		a = b;
		b = rest;
	} 

	


	return 0;
}