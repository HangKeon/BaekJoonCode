#include <iostream>
using namespace std;

int main()
{
	int n, p;						//n : ó�� ����ϴ� ����, p : ������ ��
	int next;						//������ ��
	int cnt = 0;					//�ݺ��Ǵ� ���� ����
	int arr[1001] = { 0, };			//�ݺ��Ǵ� ���� �Ÿ��� ���� �迭 -> n<=1000�̹Ƿ� �迭 ���� �ʿ�!

	cin >> n >> p;

	next = n;

	arr[n]++;						//�����ϴ� ���� ������

	while (1)
	{
		next = next * n % p;

		arr[next]++;

		if (arr[next] > 2)			//Ż������ -> Ȯ���ϰ� 2�� �̻� �ݺ��Ǵ� ��츸 Ż��!
			break;
	}

	for (int i = 0; i < p; i++)
		if (arr[i] > 1)
			cnt++;

	cout << cnt << endl;


	return 0;
}