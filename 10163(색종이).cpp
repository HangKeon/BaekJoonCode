#include <iostream>
using namespace std;

int arr[1001][1001];			//�����̰� ���̴� ��

int main()
{
	int n;						//�������� ���
	int a, b, c, d;				//a,b : ������ ���� ���� �Ʒ�, c : �ʺ�, d : ����
	int cnt[101] = { 0, };		//�� �簢���� ���̴� ������ ���

	cin >> n;

	for (int i = 1; i <= n; i++)	//i�� ������ ǥ���� �� ����ϱ� ����!
	{
		cin >> a >> b >> c >> d;

		for (int j = a; j < a + c; j++)
			for (int k = b; k < b + d; k++)
				arr[j][k] = i;
	}

	for (int i = 0; i <= 1000; i++)
		for (int j = 0; j <= 1000; j++)
			cnt[arr[i][j]]++;

	for (int i = 1; i <= n; i++)
		cout << cnt[i] << endl;



	return 0;
}