#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b);

//�� �� �迭�� �ۿ� �������� ������ ��Ÿ�� ������ ����!!
int card[101];					//���̿� ���� �����ϴ� �迭
int arr[101];					//gcd�� ������� ������ �迭

int main()
{
	int n;							//���̿� ���� ���� ����(2 ~ 100)
	int gcd;						//card[1]-card[0] ~ card[i]-card[i-1]�� �ִ������� ����
	int num = 0;					//gcd�� ����� arr�� ������ �� ����� �ε��� �� ����� ����
	
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> card[i];

	sort(card, card + n);			//card �迭�� ������������ �����Ѵ� -> �ֳ��ϸ� card[i]-card[i-1]�� ������ ���ؾ� �ϱ� �����̴�.

	gcd = card[1] - card[0];		//gcd�� �ִ������� ���ؾ� �ϹǷ� ó�� �񱳰��� �ʿ��ϴ�

	for (int i = 2; i < n; i++)		//�ִ������� ���Ѵ�
		gcd = GCD(gcd, card[i] - card[i - 1]);

	for (int i = 1; i*i <= gcd; i++)		//���� ��� 24�� ����� 1,2,3,4,6,8,12,24�̴�. 
	{										//�̶�, 4������ ���ϸ� �������� ���� �ʿ䰡 �����Ƿ� i*i <= gcd��� ������ �����Ѵ�.
		if (gcd%i == 0)						//���� gcd�� i�� ������ �������ٸ�
		{
			arr[num++] = i;					//i�� gcd�� ����̹Ƿ� arr�� ����

			if (i != gcd / i)				//i�� gcd�� ������ gcd/i�� gcd�� ����̹Ƿ� �̰͵� �����ؾ� �Ѵ�
				arr[num++] = gcd / i;
		}
	}

	sort(arr, arr + num);					//arr�� ������������ ���� -> �̶�, arr�� gcd�� ��� 1�� ���� �ִ�.

	for (int i = 0; i < num; i++)			//���
	{
		if (arr[i] != 1)
			cout << arr[i] << ' ';
	}
	cout << endl;

	return 0;
}

int GCD(int a, int b)				//�ִ����� ->GCD(���� ��, ������ ��)
{
	int c;							//������

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}