#include <iostream>
using namespace std;

int main()
{
	int N;						//ù°�ٿ� �Է��ϴ� ����, ��° �ٿ� ���� ������ ������ �ǹ�. N<=50�� �ڿ���
	//int *arr = new int[N];		//��° �ٿ� ���� ���ڸ� �ǹ�.	|arr|<100�� ����
	int *arr;
	int a, b;					//1111�� ���� ����.
	int result = 0;				//��°��� �ǹ�.

	while (1)					
	{
		cin >> N;
		
		if (N>50)				//N>50 �� ��� �ٽ� �Է��ϰ� ��.
		{
			cout << "�ٽ� �Է����ּ���.\n";
		}
		else
		{
			arr = new int[N];		//��° �ٿ� ���� ���ڸ� �ǹ�.	|arr|<=100�� ����
			break	;
		}
	}

	for (int i = 0; i<N; i++)		//��° ���� �Է�.
	{
		cin >> arr[i];
		if (arr[i] > 100 || arr[i] < (-100))
		{
			cout << "�Է��ϴ� ���ڴ� -100�̻� 100���ϸ� �����մϴ�." << endl;
			return 0;
		}
	}

	if (N == 1)						//N=1�� ���
		cout << "A" << endl;		//�ֳ��ϸ� �� ���� ���� ������ �� �� ���� �����̴�.
	else if (N == 2)				//N=2�� ���
	{
		if (arr[0] == arr[1])		//���� arr[0]=arr[1]�� ���
			cout << arr[0] << endl;	//arr[0]�� ���
		else
			cout << "A" << endl;	//�ֳ��ϸ� N=2�� ��� ���� ���� ���� ���� �� ������ �� ���� �˼� ���� ����.
	}

	if (arr[0] == arr[1])							//arr[0]=arr[1]�� ���
		a = 0;										//a=0�� ���´�.
	else											//arr[0]!=arr[1]�� ���
		a = (arr[2] - arr[1]) / (arr[1] - arr[0]);	//a�� ��

	b = arr[1] - arr[0] * a;						//b�� ��

	for (int i = 2; i<N; i++)
	{
		if (arr[i - 1] != arr[i - 2] && (a != (arr[i] - arr[i - 1]) / (arr[i - 1] - arr[i - 2])))
		{
			cout << "B" << endl;
			return 0;
		}
		if (b != (arr[i - 1] - arr[i - 2] * a))
		{
			cout << "B" << endl;
			return 0;
		}
	}

	result = arr[N - 1] * a + b;

	cout << result << endl;

	return 0;
}

//��	->	�������� ���� ���� �ʿ�