#include <iostream>
using namespace std;

int main() 
{
	int a, b, c;				//a : ��, b : ��, c : �丮�ϴµ� �ʿ��� �ð�(��)

	cin >> a >> b >> c;

	b += c;

	c = b / 60;					//60���� ���� ��� �ð��� �ӽ÷� ����.
	b %= 60;					//60������ ���� �������� ����!
	a += c;

	if (a > 23)
		a %= 24;

	cout << a << ' ' << b << endl;



	return 0;
}