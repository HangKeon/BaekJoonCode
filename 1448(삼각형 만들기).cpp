#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a=0,b=0,c=0,d=0,e=0,n=0,sum=0;
	int arr[100000];

	cin >> n;			//������ ���� ��

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	//���� ��
	}

	sort(arr, arr + n);

	for (int i = 0; i < n - 2; i++)
	{
		a = arr[i];
		b = arr[i + 1];
		c = arr[i + 2];
		d = a + b;
		e = b - a;
	}

	if (d > c && e < c)
	{
		sum = a + b + c;
		cout << "sum = " << sum << endl;
	}
	else
	{
		cout << "-1" << endl;
	}





	return 0;
}

//��