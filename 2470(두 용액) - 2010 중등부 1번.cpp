#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;						//��ü ����� ��
	int arr[100001];			//����� Ư������ �����ϴ� �迭, �������� �Է�
	int result = 2000000000;	//�� ����� ���� ���� �ּڰ��� ����


	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int a = 0, b = n - 1;		//a : arr�� ���� �ε���, b : arr�� �� �ε���
	int temp_a, temp_b;			//result�� ���� �ٲ� �� ������ a,b

	while (a < b)
	{
		if (result >= abs(arr[a] + arr[b]))	//���� result ������ arr[a]+arr[b]�� ���񰪺��� �� ū ���
		{
			result = abs(arr[a] + arr[b]);			//��, 0���� �� �ָ� �������ִ� ���
			temp_a = a;
			temp_b = b;
		}

		if (arr[a] + arr[b] < 0)
			a++;
		else if (arr[a] + arr[b] > 0)
			b--;
		else
			break;
	}

	cout << arr[temp_a] << ' ' << arr[temp_b] << endl;


	return 0;
}