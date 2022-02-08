#include <iostream>
using namespace std;

int factorial(int n)	//���丮���� ���ϴ� �Լ�
{
	int result = 1;						//���丮���� ����� �����ϴ� ����

	for (int i = n; i > 1; i--)
		result *= i;

	return result;
}

int main()
{
	int n, m, k;						//n : ���� ��, m : ���� ��, k : o�� ǥ�õ� ĭ�� ��ȣ
	int result;							//����� ��
	int r1, r2;

	cin >> n >> m >> k;

	if (k != 0)							//o�� �ִ� ���
	{
		if (k%m == 0)					//���� o�� ���� �����ʿ� �ִٸ�
		{
			r1 = factorial(m - 1 + k % n);
			r2 = factorial(m - 1)*factorial(k%n);

			result = r1 / r2;
		}
		else							//�Ϲ����� ���
		{
			r1 = factorial(k%m - 1 + k / m) / (factorial(k%m - 1)*factorial(k / m));
			r2 = factorial(m + n - 1 - k % m - k / m) / (factorial(m - k % m)*factorial(n - 1 - k / m));

			result = r1 * r2;
		}
	}
	else								//o�� ���� ���
		result = factorial(m + n - 2) / (factorial(m - 1)*factorial(n - 1));
	
	cout << result << endl;


	return 0;
}