#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, bomb;					//s : �Է��� ���ڿ�, bomb : ���� ���ڿ�
	char result[1000001];			//���ڿ� s�� �ϳ��� �����ϸ鼭 bomb�� ���� ���� ã�� �迭
	int len;						//bomb�� ���̸� ������ ����
	int idx = 0;					//result�� �ε���

	cin >> s >> bomb;


	for (int i = 0; i < s.length(); i++)
	{
		result[idx] = s[i];		//result�� s�� ���ڸ� �ϳ��� ����!

		len = bomb.length();
		int temp = len - 1;			//bomb�� �ε����� �ڿ��� ���� �д´� -> len-1�� �����ؾ� �Ѵ�
		int check = 0;				//check = 1�� ���, result�� bomb�� ���� �κ��� �����ϰ� idx�� len��ŭ ������.

		if (s[i] == bomb[temp])			//s[i]�� bomb[temp]�� ���ٸ�
		{
			for (int j = idx; j > idx - len; i--)
			{
				if (result[idx] == bomb[temp])
				{
					check = 1;
					temp--;
				}
			}

			if (check == 1)
				idx -= len;			//bomb�� ���� �κ��� �����ϰ� �� �κк��� �ٽ� �Է�!
			
		}



		idx++;
	}

			/*
	if (idx == 0)					//result�� ����� ���ڰ� ���� ���
	{
		cout << "FRULA" << endl;
		return 0;
	}

	for(int i=0;i<idx;i++)
		cout << result[i];

	cout << endl;*/

	return 0;
}