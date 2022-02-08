#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int l, c;					//l : ������ �̷�� ���ĺ� ����, c : ���ĺ� ����
char arr[16];				//������ ���ĺ� �迭

void dfs(int idx, string s, int odd, int even)					//dfs(�ε���, ���ڿ�, ���� ����, ���� ����)
{
	if (s.size() == l)											//��� & Ż������
	{
		if (odd >= 1 && even >= 2)
		{
			cout << s << endl;
		}
		return;
	}

	for (int i = idx; i < c; i++)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')	//������ ���
			dfs(i + 1, s + arr[i], odd + 1, even);
		else																					//������ ���
			dfs(i + 1, s + arr[i], odd, even + 1);
	}
}

int main()
{
	cin >> l >> c;

	for (int i = 0; i < c; i++)
		cin >> arr[i];

	sort(arr, arr + c);

	dfs(0, "", 0, 0);

	return 0;
}