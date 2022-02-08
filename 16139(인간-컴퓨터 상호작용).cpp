#include <iostream>
#include <string>
using namespace std;

int arr[200001][27];		//arr[s�� �ε���][���ĺ�] : s�� �ε��������� ���ĺ��� ���� ����

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(0);

	string s;							//�Է��� ���ڿ�
	int q;								//������ Ƚ��
	char c;								//ã�� ����
	int l, r;							//���ڿ�s���� ����c�� ���� ����

	cin >> s >> q;

	for (int i = 0; i < s.length(); i++)
	{
		if(i==0)
			arr[i][s[i] - 'a'] = 1;
		else
		{
			for (int j = 0; j < 26; j++)
				arr[i][j] = arr[i - 1][j];

			arr[i][s[i] - 'a']++;
		}
	}

	for (int i = 0; i < q; i++)
	{
		int cnt = 0;					//����c�� ����

		cin >> c >> l >> r;

		if (l == 0)
			cout << arr[r][c - 'a'] << "\n";
		else
			cout << arr[r][c - 'a'] - arr[l - 1][c - 'a'] << "\n";
	}

	return 0;
}