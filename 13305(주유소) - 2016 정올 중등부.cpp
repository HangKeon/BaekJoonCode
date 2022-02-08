#include <iostream>
using namespace std;

int main()
{
	int n;							//������ ����
	long long road[100001];			//�� ���ø� �����ϴ� ������ ���� ����
	long long oil[100001];			//���ô� ������ ���� ����
	long long d[100001] = { 0, };	//oil * road
	int min;						//�ּ� �⸧��

	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> road[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> oil[i];
	}

	d[0] = oil[0] * road[0];		//������ ���ÿ��� ������ �⸧�� ä���� �ϹǷ� road[0]��ŭ�� �켱 ä���.

	min = oil[0];

	for (int i = 1; i < n; i++)
	{
		if (oil[i] < min)						//���� oil�� min���� ������
			min = oil[i];						//min�� oil�� ����

		d[i] = d[i - 1] + min * road[i];		//d[i] = (���� ���ÿ��� ä�� �⸧ ����) + (�ּ� �⸧�� min�� road[i]�� ��) 
	}

	cout << d[n - 1] << endl;


	return 0;
}