#include <iostream>
#include <string>
using namespace std;

//A : 65 ~ Z : 90
//a : 97 ~ z : 122

int main()
{
	int alphabet[26] = { 0, };					//���ĺ� A~Z���� ����(�ƽ�Ű�ڵ��)
	string s;									//�Է��� ���ڿ�
	int MAX = 0;								//���� ���� ���� ���ĺ��� ������ ����
	char alpha;									//���� ���� ���� ���ĺ��� ����

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)			//�빮���� ���
			alphabet[s[i] - 65]++;
		else if (s[i] >= 97 && s[i] <= 122)		//�ҹ����� ���
			alphabet[s[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (MAX < alphabet[i])					//���� ���� ���� ���ĺ��� �� ���� ���
		{
			MAX = alphabet[i];					//MAX�� alphabet�� ����
			alpha = i + 65;						//alpha�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����
		}
		else if (MAX == alphabet[i])			//���� ���� ���� ���ĺ��� ���� ���� ���
		{
			alpha = '?';
		}
	}

	cout << alpha << endl;

	return 0;
}