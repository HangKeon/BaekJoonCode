#include <iostream>
using namespace std;

int main()
{
	int N, M;									//N = �л� ��, M = �������� ��
	int x, y;									//x > y
	int intro = 0;								//list �迭�� ���� ���� ������ �ִ��� Ȯ���ϱ� ���� for���� �ʿ��� ��!
	int check = 0;								//���� �������� ������� ���� ���� �ʿ��� ������ ��Ÿ�� ��!
	int list[100001] = { 0, };					//�л� ��(N)�� �´� ���ڸ� �ֱ� ���� �迭! N�� ���� ��ŭ �迭 ����!

	cin >> N >> M;

	for (int i = 1; i <= M; i++)				//�������� ����(M)��ŭ for�� ��� -> ������ �Է�!
	{
		cin >> x >> y;
		list[x]++;								//list[x] ����!
		list[y]--;								//list[y] ����!
	}

	for (int i = 1; i <= N; i++)				//list �迭�� �ڱ� �ڽ��� �ε����� ���� �л����� ���� ���� ���� �� �ִ�.
	{
		list[i] += i;
	}

	for (int i = 1; i <= N; i++)				//list �迭�� ���� ���� ������ �ִ��� Ȯ���ϱ� ���� for��!
	{
		if (intro == 0)												//intro = 0�� ���!
		{
			for (int j = i + 1; j <= N; j++)
			{
				if (list[i] > 0 && list[i] != list[j])				//list �迭�� 0���� ũ��, list �迭���� ���� ���� ���� ���� ���
				{
					check = 1;										//check = 1 ����!
				}
				else												//if�� �ƴ� ���!
				{
					check = 0;										//check = 0 ����!
					intro = 1;										//intro = 1 ����!
					break;
				}
			}
		}
		else														//intro�� 0�� �ƴ� ��� -> ��, intro = 1�� ���!
			break;
	}

	if (check == 1)													//check = 1�� ���!
		for (int i = 1; i <= N; i++)								//list �迭�� ���!
			cout << list[i] << " ";
	else if (check == 0)											//check = 0�� ���!
		cout << "-1";												//-1�� ���!

	cout << endl;



	return 0;
}

//��