#include <iostream>
using namespace std;

int main()
{
	int N, num = 1;														//�� ��°�� ��ġ�ϴ��� �˾ƺ� ��
	cout << "���ڸ� �Է��ϼ��� : ";										//num�� �� ��° �������� ��Ÿ��
	cin >> N;

	while (num++)
	{
		if (N == 8 * num + 1)											//1��°
		{
			cout << "1��°" << endl;
			break;
		}
		if (N == 8 * num - 6 || N == 8 * num)							//2��° 
		{
			cout << "2��°" << endl;
			break;
		}
		if (N == 4 * num - 1)											//3��°
		{
			cout << "3��°" << endl;
			break;
		}
		if (N == 8 * num - 4 || N == 8 * num - 2)						//4��°
		{
			cout << "4��°" << endl;
			break;
		}
		if (N == 8 * num - 3)											//5��°
		{
			cout << "5��°" << endl;
			break;
		}
	}

	return 0;
}

//��