#include <iostream>
#include <algorithm>
using namespace std;

long long add[5000001];					//add[n] : 0~n������ v�� �������� ����
long long mul[5000001];					//mul[n] : 0~n������ v^2�� �������� ����
int arr[5000001];						//�Է��� ���� ������ �迭

int main()
{
	cin.tie(0);

	int n;								//�ڿ����� ����
	long long sum = 5e10 + 1;			//���� ���� ������ ��
	long long temp;						//������ ��
	int ans;							//sum�� �ش��ϴ� arr��

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	sort(arr + 1, arr + 1 + n);					//�信 ���� ���� ������ ����ϱ� ���� ����

	for (int i = 1; i <= n; i++)				//1�� ��� ���ϱ�
	{
		if (i == 1)								//���� ó�� ���� ���ؼ� ���
		{
			add[i] = arr[i];
			mul[i] = arr[i] * arr[i];
		}
		else							//�������� �������� ���ϱ� -> for���� 1���� ���!
		{
			add[i] = add[i - 1] + arr[i];
			mul[i] = mul[i - 1] + arr[i] * arr[i];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		temp = (long long)arr[i] * (i - 1) - add[i - 1] + (add[n] - add[i]) - (long long)arr[i] * (n - i);	//2548�� ����

		if (sum > temp)
		{
			sum = temp;
			ans = arr[i];	
		}
	}

	cout << ans << ' ';

	sum = 5e14 + 1;																//�ʱ�ȭ

	for (int i = 1; i <= 10000; i++)											//2�� ��� ���ϱ�
	{
		temp = mul[n] - (long long)2 * add[n] * i + (long long)i * i * n;		//�μ������� ��

		if (sum > temp)
		{
			sum = temp;
			ans = i;
		}
	}

	cout << ans << endl;


	return 0;
}