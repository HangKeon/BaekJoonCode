#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;							//������� ����
int mp, mf, ms, mv;				//�ܹ���, ����, ź��ȭ��, ��Ÿ��
int arr[16][5];
int sum;						//������ �����ϴ� ���� ����
int ans = 2e9;					//������ ���� ���� ��
vector<int> vec;				//�����ϴ� ������ ��ȣ�� ����
vector<int> vec2;

void dfs(int p, int f, int s, int v, int price, int idx)		//dfs(�ܹ���, ����, ź��ȭ��, ��Ÿ��, ����, ��ȣ)
{
	if (ans < price)											//�������� �̸� �Ÿ�
		return;

 	if (p >= mp && f >= mf && s >= ms && v >= mv)
	{
		if (ans > price)
		{
			ans = price;
			vec2 = vec;
		}

		return;
	}

	for (int i = idx; i <= n; i++)
	{
		vec.push_back(i);

		dfs(p + arr[i][0], f + arr[i][1], s + arr[i][2], v + arr[i][3], price + arr[i][4], i+1);

		vec.pop_back();
	}
}

int main()
{
	cin >> n >> mp >> mf >> ms >> mv;

	for (int i = 1; i <= n; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];

	
	dfs(0,0,0,0,0,1);
	
	if (ans == 2e9)							//������ �����ϴ� ���� ���� ���
	{
		cout << "-1" << endl;
		return 0;
	}


	cout << ans << endl;

	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i] << ' ';

	cout << endl;


	return 0;
}