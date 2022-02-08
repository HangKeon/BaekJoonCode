#include <iostream>
using namespace std;

int main()
{
	char mine[101][101];								//����ã�� �Է��� �迭
	int chg[101][101] = { 0, };							//����ã�⸦ ���ڷ� �ٲٴ� �迭
	int m, n;											//m = ��, n = ��
	int cnt = 1, mineCnt = 0;							//cnt = field �� ����, mineCnt = ��ó�� �ִ� ������ ��
	int BIG_VALUE = 1000;

	while (1)
	{
		cin >> m >> n;

		if (m == 0 && n == 0)							//Ż������
			break;

		for (int i = 0; i < m; i++)						//�Էºκ�
			cin >> mine[i];
		cout << endl;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (mine[i][j] == '*')					//���ڶ��
					chg[i][j] = BIG_VALUE;				//chg�� 1000�� ����
				else									//���ڰ� �ƴ϶��
				{
					if (i - 1 >= 0 && j - 1 >= 0 && mine[i - 1][j - 1] == '*') mineCnt++;	//���� ���� ���ڰ� �ִ� ���
					if (i - 1 >= 0 && mine[i - 1][j] == '*') mineCnt++;						//���� ���ڰ� �ִ� ���
					if (i - 1 >= 0 && j + 1 < n && mine[i - 1][j + 1] == '*') mineCnt++;	//������ ���� ���ڰ� �ִ� ���
					if (j + 1 < n && mine[i][j + 1] == '*') mineCnt++;						//�����ʿ� ���ڰ� �ִ� ���
					if (i + 1 < m && j + 1 < n && mine[i + 1][j + 1] == '*') mineCnt++;		//������ �Ʒ��� ���ڰ� �ִ� ���
					if (i + 1 < m && mine[i + 1][j] == '*') mineCnt++;						//�Ʒ��� ���ڰ� �ִ� ���
					if (i + 1 < m && j - 1 >= 0 && mine[i + 1][j - 1] == '*') mineCnt++;	//���� �Ʒ��� ���ڰ� �ִ� ���
					if (j - 1 >= 0 && mine[i][j - 1] == '*') mineCnt++;						//���ʿ� ���ڰ� �ִ� ���

					chg[i][j] = mineCnt;

					mineCnt = 0;
				}
			}
		}

		cout << "Field #" << cnt++ << ":" << endl;	//��ºκ�

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (chg[i][j] == 1000)				//chg�� 1000�� ����Ǿ� �ִ� ���
					cout << '*';					//*�� ���
				else								//chg�� 1000�� ����Ǿ� ���� ���� ���
					cout << chg[i][j];				//chg�� ����� ���� ���
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}