#include <iostream>
using namespace std;

int main()
{
	int n;								//����� ����
	int stick[100001];					//����� ���� ����
	int cnt = 0;						//�����ʿ��� �� �� ���̴� ������ ����
	int MAX = 0;						//�ִ� ���� ���̸� ����

	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> stick[i];

	for (int i = n; i >= 1; i--)		//�����ʺ��� ���ϱ� ����
		if (MAX < stick[i])				//MAX���� ū ���
		{
			MAX = stick[i];				//MAX�� ���������ν� ���ʿ��� MAX���� ���� ������� ���� �ʴ´�.
			cnt++;
		}

	cout << cnt << endl; 

	return 0;
}