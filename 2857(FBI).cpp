#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[6][11];					//�Է��� ���ڿ�, �ִ� ���� 10����, 5����
	int cnt[6] = { 0, };				//FBI�� �ִ� ����� ����
	int c = 0;							//cnt�� ������ ��, ���� cnt == 0�� ��� FBI���� ����� �ϳ��� ���ٴ� ��
	int a;								//arr�� ���ڿ��� ���� - 2

	for (int i = 1; i < 6; i++)
		cin >> arr[i];

	for (int i = 1; i < 6; i++)
	{
		a = strlen(arr[i]) - 2;
		for (int j = 0; j < a; j++)
		{
			if (arr[i][j] == 'F'&&arr[i][j + 1] == 'B'&&arr[i][j + 2] == 'I')
			{
				cnt[i] = i;
				c++;
				cout << cnt[i] << ' ';
				break;
			}
		}
	}

	if (c == 0)
		cout << "HE GOT AWAY!";

	cout << endl;

	return 0;
}