#include <iostream>
using namespace std;

int main()
{
	int n, k;						//n : ���� ����, k : ���� ��

	cin >> n >> k;

	n -= k * (k + 1) / 2;			

	if (n < 0)						//��� �� �ٸ��� �ִ��� ���̸� ���� �ؾ� �ϱ� ����
		cout << "-1";
	else
	{
		if(n%k!=0)					//�� ������������ ���� �и��� ���� ���� �����̴�.
			cout << k << endl;
		else						//������������ ���� �׸�ŭ �յ��ϰ� ���� ������ �Ǳ� ������ �׻� ����!
			cout << k - 1 << endl;
	}
	   	 
	return 0;
}