#include <iostream>
using namespace std;

int main() 
{
	int n;						//�� ��° ��
	int cnt = 0;				//������ ���ִ� ����
	int sum = 0;				//ù ��° ������ n��° �������� ��
	int j;						//ã�ƾ� �ϴ� n��° ��
	int sw = 0;					//sw=1�̸� �ݺ��� Ż��

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cnt++;
			sum += j;

			if (cnt == n)
			{
				sw = 1;
				break;
			}
		}

		if (sw) break;
	}

	cout << j << endl << sum << endl;

	return 0;
}