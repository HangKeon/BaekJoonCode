#include <iostream>
using namespace std;

int main()
{
	int a, b, c, n;					//a,b,c : �� �濡 �ӹ� �� �ִ� �ο���, n : ��ü �ο� ��
	int min;						//�濡 �ӹ��� �ּ� �ο���

	cin >> a >> b >> c >> n;

	min = n % a;

	if (n%b < min)
		min = n % b;

	if (n%c < min)
		min = n % c;

	cout << min << endl;

	return 0;
}