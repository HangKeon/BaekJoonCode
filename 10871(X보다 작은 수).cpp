#include<iostream>
using namespace std;

int main()
{
	int N = 0, X = 0, num = 0, k = 0;				//N�� �Է��� ������ ����, num�� brr�� ����
													//X�� �Է��� ���ڵ� �� X���� ���� ���� ����س��� ���� ���ذ�.
	cout << "N : ";									//k�� brr�� arr�� �����ϱ� ���ؼ� ���.
	cin >> N;
	cout << "X : ";
	cin >> X;

	int *arr;										//N�� ������ �°� �Է��� ����
	int brr[10000] = { 0, };						//arr�� X���� ���� ������ ����

	for (int i = 0; i < N; i++)
	{
		arr = new int[i];							//N�� ������ �°� �Է��� ����
		cin >> arr[i];

		if (arr[i] < X)
		{
			brr[k] = arr[i];
			num++;
			k++;
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << brr[i] << " ";
	}

	return 0;
}

//�߻�