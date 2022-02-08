#include <iostream>
using namespace std;

int GCD(int, int);
int LCM(int, int);

int main()
{
	int num = 0, a[50], b[50], c[50], gcd = 0, lcm = 0;		//num=����� ����, a,b,c=�Է��� ��� �� ����
															//gcd=�ִ�����, lcm=�ּҰ����
	cin >> num;			//�Է��� ����� ����

	for (int i = 0; i < num; i++)
	{
		cin >> a[i];	//����� �Է�
		b[i] = a[i];	//�Է��� ����� b,c�� ����
		c[i] = a[i];	//�̷��� �ϴ� ������ �Ʒ� GCD(a[i],a[i+1])�� �� �� a[i+1]�� 
	}					//GCD�� ���� ��������Ƿ� ���� �Է��� ���� ������ �� ���� ����


	for (int i = 0; i < num - 1; i++)
	{
		a[i + 1] = GCD(a[i], a[i + 1]);		//a[i]�� a[i+1] ������ GCD�� a[i+1]�� �־� for���� ������ �� �ְ� ��.
		gcd = a[i + 1];

		b[i + 1] = LCM(b[i], b[i + 1]);		//b[i]�� b[i+1] ������ LCM�� b[i+1]�� �־� for���� ������ �� �ְ� ��.
		lcm = b[i + 1];
	}

	for (int i = 0; i < num; i++)
	{
		if (lcm == c[i])					//���� lcm�� �Է��� ����� ���ٸ�
		{
			lcm *= 2;						//������ 2�� ���ض� -> �ֳ��ϸ� 1037�� �������� �Է��� ���� 1�� �ڱ� �ڽ���
		}									//������ ������ ���� �ֱ� ����.
		else if (lcm == 1)
			break;
	}

	cout << "�ִ����� = " << gcd << endl;
	cout << "�ּҰ���� = " << lcm << endl;


	return 0;
}

int GCD(int a,int b)				//�ִ�����
{				
	int c;

	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	
	return a;
}

int LCM(int a, int b)				//�ּҰ����
{
	return a*b / GCD(a, b);
}

//��