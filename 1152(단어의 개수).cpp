#include <iostream>
#include <string>
using namespace std;

int main()
{
	//char s[1000001];							//�Է��� ���ڿ�
	string s;							//�Է��� ���ڿ�	
	int cnt = 1;						//�ܾ��� ���� -> ������ ������ ���� ������ 1�� �����ϹǷ� ó���� 1�� �ξ�� �Ѵ�.

										//cin.getline(s,1000001);
	getline(cin, s);					//������� �Է�

	if (s[0] == ' ')					//���� ���� ���� ������ ���
		cnt = 0;						//cnt �� 0���� �����

	for (int i = 0; i < s.length(); i++)	//������ ������ ��� cnt�� 1�� ����
		if (s[i] == ' ')
			cnt++;

	if (s[s.length() - 1] == ' ')		//���� ���� �������� ������ ���
		cnt--;							//���ߴ� cnt���� 1�� ����

	cout << cnt << endl;


	return 0;
}