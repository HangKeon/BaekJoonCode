#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;										//���� �̸� ����
	string s[50];								//�Է��� ���ڿ� -> �������迭�� ����	
	//char s[50][50];
	string arr;									//s[0]�� ������ ������ �� �ٸ� s��� ���� ���ڿ�
	int len;									//�Է��� ���ڿ� s�� ����

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	len = s[0].length();						//���ڿ� ���̸� len�� ����
	//len = strlen(s[0]);
	arr = s[0];									//���ڿ� arr�� s[0]�� ����

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (arr[j] != s[i][j])				//s[i][j]�� arr[i]�� �ٸ� ���
				arr[j] = '?';
		}
	}

	cout << arr << endl;

	return 0;
}