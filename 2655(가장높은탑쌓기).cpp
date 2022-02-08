#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct
{
	int s;							//����
	int h;							//����
	int w;							//����
	int idx;						//������ ��ȣ
}Block;

int cmp(Block &a, Block &b)			
{
	return a.w < b.w;
}

int main()
{
	int n;							//���� ��
	int height = 0;					//�ִ� ���� ����
	int dp[101] = { 0, };			//�ִ� ���� ���̸� ����
	vector<int> ans;				//���� ���̰� ���� ���� ����� ����� ��ȣ ����

	cin >> n;

	vector<Block> block(n + 1);		//������ ���� ����ü

	block[0] = { 0, };				//ó�� ������ ���� 0���� �ʱ�ȭ -> vector�̹Ƿ�!

	for (int i = 1; i <= n; i++)
	{
		cin >> block[i].s >> block[i].h >> block[i].w;

		block[i].idx = i;			//���� ��ȣ ����
	}

	sort(block.begin(), block.end(), cmp);			//���� ������ �������� -> ���� ����, ���̸� �Ű澲�� ��.

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			if (block[i].s > block[j].s)			//���԰� ���ſ� ����� ���� > ���԰� ������ ����� ����
				dp[i] = max(dp[i], dp[j] + block[i].h);	//dp[i]�� ��� �ִ� ���� ���� ����

		height = max(height, dp[i]);				//�ִ� ���� ���� ����
	}

	while (n)
	{
		if (height == dp[n])
		{
			ans.push_back(block[n].idx);			//block[n]�� ��ȣ�� ����

			height -= block[n].h;					//block[n]�� ���̸�ŭ ��
		}

		n--;
	}

	cout << ans.size() << endl;

	for (int i = ans.size() - 1; i >= 0; i--)
		cout << ans[i] << endl;

	return 0;
}