#include <iostream>
using namespace std;

int main()
{
	int n;								//�Է� ����
	int arr[51];						//���� ���ڸ� �Է��ϴ� �迭
	int a, b;							//a : ���ϴ� ��, b : ���ϴ� ��

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	if (n == 1)							//n�� 1�� ��� ���� ������ ���� �� �ִ� ��찡 ����.
	{
		cout << 'A' << endl;
		return 0;
	}
	else if (n == 2)					//n�� 2�� ��� ����ŭ �����ָ� �ȴ�
	{
		if (arr[0] == arr[1])			//�Է��� �� ���� ���ٸ� ���� ���� ����
			cout << arr[0] << endl;
		else							//�Է��� �� ���� �ٸ��� �� ���� ������ ���� �� �ִ� ��찡 ����.
			cout << 'A' << endl;

		return 0;
	}
	
	if (arr[1] == arr[0])				//�и� 0�� ���
		a = 0;
	else								//�и� 0�� �ƴ� ���
		a = (arr[2] - arr[1]) / (arr[1] - arr[0]);

	b = arr[1] - arr[0] * a;
	

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] != arr[i] * a + b)	//��, a,b�� �������� �ʴ� ���
		{
			cout << 'B' << endl;
			return 0;
		}

		arr[i + 2] = arr[i + 1] * a + b;

	}
	
	cout << arr[n] << endl;


	return 0;
}