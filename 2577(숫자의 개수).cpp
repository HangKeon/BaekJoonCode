#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int mul;						//a,b,c�� ���� ���� ����
	int arr[10] = { 0, };			//0~9�� ������ ���� �迭
	int r;							//mul%10�� ������ ��

	cin >> a >> b >> c;

	mul = a * b * c;

	while (mul != 0)
	{
		arr[(mul % 10)]++;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;


	return 0;
}