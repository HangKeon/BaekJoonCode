#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n;												//�Է��� �ܾ��� ����, 1<=n<=10
	int alphabet[26] = { 0, };							//���ĺ�	-> ���ĺ� ������ ���� ���� �迭
	int num[10] = { 0, };								//�ڸ� ���� ������ ���� ���� �迭
	string *word;										//�Է��ϴ� �ܾ�
	int len = 0;										//�Է��� ���� word�� ����
	int sum = 0;										//�� ��
	int alphabet_num = 0;								//alphabet �迭�� ����ִ� ���ĺ��� ������ ���ϱ� ���� ����
	int start_value = 9;								//���ĺ� �빮�ڸ� 0~9 ���� �� �ϳ��� �ٲ� ��, 
														//�׻� 9���� �����ϹǷ� �̰� ������ ���!

	cin >> n;

	word = new string[n];

	for (int i = 0; i < n; i++)
	{
		cin >> word[i];									//word�� string�̹Ƿ� �� #include <string>�� ����� �Ѵ�.
	}

	for (int i = 0; i < n; i++)
	{
		len = word[i].length();

		for (int j = 0; j <len; j++)
		{
			alphabet[word[i].at(j) - 65] += (int)pow(10, len - j - 1);		//��, �� ���ĺ��� 10^(len-j-1)�� �����ش�. 
		}																	//-> �̷��� ���ĺ��� �ߺ����� ���� ���� ������ ���� �� �ִ�.

		for (int j = len - 1; j >= 0; j--)
		{
			num[j] += 1;										//�� �ڸ����� �� ���� ���� �ʿ����� ���´�.
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] != 0)									//alphabet �迭�� �� = 0 �� ���
			alphabet_num += 1;									//alphabet_num�� 1�� ���Ѵ�.
	}
		
	sort(alphabet, alphabet + alphabet_num);					//�������� ����	-> ��, alphbet �迭�� ���� ������� ����!!!

	for (int i = alphabet_num - 1; i >= 0; i--)
	{
		sum += alphabet[i] * start_value;						//sum�� ���� ����.
		start_value--;											//start_value�� 9���� �����ؼ� 1�� �پ���� �Ѵ�.
	}

	cout << sum << endl;

	return 0;
}	//��



/*for (int i = 0; i < n; i++)
{
for (int j = 0; j < word[i].length(); j++)
cout << word[i].at(j) << endl;						//at()�� string���� �� ���� �� ����� �� �ֵ��� �ϴ� ��.*/