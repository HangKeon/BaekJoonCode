#include <iostream>
using namespace std;

int main()
{
	int a, b, v, cnt = 0;			//a = ���� �ö󰡴� ����, b = �㿡 �ö󰡴� ����, v = ���� ���� ����, cnt = ���� ���� �ö󰡴µ� �ɸ��� ��¥

	cin >> a >> b >> v;

	//cnt = (v - b - 1) / (a - b) + 1;
	cnt = (v - a) / (a - b) + 1;

	if ((v - a) % (a - b) != 0)
		cnt++;


	cout << cnt << endl;


	return 0;
}