#include <iostream>
using namespace std;

int main()
{
	int n;							//�Է��� 10���� ����
	int rest[42] = { 0, };			//�������� ������ �迭
	int cnt = 0;					//���� �ٸ� �������� ������ ���� ����

	for (int i = 0; i < 10; i++)
	{
		cin >> n;

		rest[n % 42] = 1;
	}
		
	for (int i = 0; i < 42; i++)
	{
		if (rest[i] != 0)
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}