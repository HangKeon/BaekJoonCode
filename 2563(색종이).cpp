#include <iostream>
using namespace std;

int main()
{
	int n;						//������ ��
	int a, b;					//������ ���� ��ġ
	int cnt = 0;				//arr�� 1�� ���� ���� 
	int arr[101][101] = { 0, };	//�����̸� ǥ���� �迭

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		for (int j = a; j < a + 10; j++)
			for (int k = b; k < b + 10; k++)
				arr[j][k] = 1;
	}

	for (int i = 0; i < 101; i++)
		for (int j = 0; j < 101; j++)
			if (arr[i][j])
				cnt++;

	cout << cnt << endl;

	return 0;
}