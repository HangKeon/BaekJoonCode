#include <iostream>
using namespace std;
int main()
{
	int n, c;					//n : ���� ũ��, c : ���� ����
	int x, y;					//���� ��ǥ
	int a, b;					//a: ���� �簢���� ���� ����, b : ���� �簢���� ���� ����

	cin >> n >> c;

	b = a = n;

	for (int i = 0; i < c; i++)
	{
		cin >> x >> y;
		if (x >= a || y >= b) 
			continue;

		if (a*y > b*x)			//���η� �ڸ� ���� > ���η� �ڸ� ����
			b = y;
		else 					//���η� �ڸ� ���� < ���η� �ڸ� ����
			a = x;
	}

	cout << a * b;
}