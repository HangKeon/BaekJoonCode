#include <iostream>
using namespace std;

char num_str[10][7] = {				//���� ǥ���ϴ� �迭
{ '-','|',' ','|','|','-','|' },	//0
{ ' ',' ',' ','|',' ',' ','|' },	//1
{ '-',' ','-','|','|','-',' ' },	//2
{ '-',' ','-','|',' ','-','|' },	//3
{ ' ','|','-','|',' ',' ','|' },	//4
{ '-','|','-',' ',' ','-','|' },	//5
{ '-','|','-',' ','|','-','|' },	//6
{ '-',' ',' ','|',' ',' ','|' },	//7
{ '-','|','-','|','|','-','|' },	//8
{ '-','|','-','|',' ','-','|' }		//9
};

int str_to_int(char ch)				//�Էµ� ���ڿ�n�� �ϳ��� �ɰ� ���ڷ� �ٲٱ� ���� �Լ�
{
	switch (ch)
	{
	case '0':return 0;
	case '1':return 1;
	case '2':return 2;
	case '3':return 3;
	case '4':return 4;
	case '5':return 5;
	case '6':return 6;
	case '7':return 7;
	case '8':return 8;
	case '9':return 9;
	default:
		return -1;
	}
}

void repeat(char ch, int n)							//repeat(�ݺ��� ����, �ݺ� Ƚ��)
{
	while (n--)
		cout << ch;
}

void print(int s, const char* str, int num)			//print(main �Լ��� s, main �Լ��� n, n�� ũ��)
{
	for (int i = 0; i < 2 * s + 3; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (i == 0)
			{
				cout << ' ';
				repeat(num_str[str_to_int(str[j])][0], s);
				cout << ' ';
			}
			else if (i < s + 1)
			{
				cout << num_str[str_to_int(str[j])][1];
				repeat(' ', s);
				cout << num_str[str_to_int(str[j])][3];
			}
			else if (i == s + 1)
			{
				cout << ' ';
				repeat(num_str[str_to_int(str[j])][2], s);
				cout << ' ';
			}
			else if (i < 2 * s + 2)
			{
				cout << num_str[str_to_int(str[j])][4];
				repeat(' ', s);
				cout << num_str[str_to_int(str[j])][6];
			}
			else
			{
				cout << ' ';
				repeat(num_str[str_to_int(str[j])][5], s);
				cout << ' ';
			}
			cout << ' ';											//���ǿ� �� ���ڴ� �� ĭ�� ����� ��.
		}
		cout << endl;												//���ǿ��� �Էµ� �ٸ��� �ٸ� �ٿ� �Է��ؾ� ��.
	}
}



int main()
{
	int s;								//s = ���ڸ� ǥ���ϴ� ũ��
	char n[8];							//n = ��µ� ����

	while (1)
	{
		cin >> s >> n;

		if (s == 0 && n == 0)			//Ż������
			return 0;

		print(s, n, strlen(n));

	}

	return 0;
}