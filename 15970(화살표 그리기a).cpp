#include <iostream>
using namespace std;

int main()
{
	int n;							//������ ����
	int x = 0, y = 0;				//x, y : color�� 1,2�� ������ �迭�� �ε���
	int pos[5001];					//���� ��ǥ�� ������ �迭
	int color[5001];				//���� ������ �迭
	int first[5001], second[5001];	//ù ��° ��, �� ��° �ٿ� ���� �迭

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> pos[i] >> color[i];

		if (color[i] == 1)			//���� ������ 1�̶��
			first[x++] = pos[i];	//first�� pos�� ����
		else						//���� ������ 2���
			second[y++] = pos[i];	//second�� pos�� ����
	}

	for (int i = 0; i < x; i++)		//ù ��° �� ���
		cout << first[i] << ' ';
	cout << endl;

	for (int i = 0; i < y; i++)		//�� ��° �� ���
		cout << second[i] << ' ';
	cout << endl;


	 



	return 0;
}