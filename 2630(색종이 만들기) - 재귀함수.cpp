#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > arr;				//���ͷ� �������迭 ����

void divide(int startX,int startY,int n)	//divide(����X, ����Y, �� ���� ����)
{





	divide()
}

int main()
{
	int n;											//��ü ������ �� ���� ����
	
	cin >> n;

	//vector<vector<int> > arr(n, vector<int>(n));	//���ͷ� ������ �迭 -> arr(������ ũ��, ������ ũ��)

	arr.assign(n, vector<int>(n));					//arr[n][n] �Ҵ�

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	divide(0, 0, n);



	return 0;
}