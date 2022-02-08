#include <iostream>
using namespace std;

int bottle[200001] = { 0, };		//���� ���Ը� ���� -> ���� ���԰� x��� bottle[x]=1�� ����
int arr[14] = { 0, };				//���� ���Ը� ������ �迭
int k;								//���� ���԰� �ٸ� ���� ����

void dfs(int x, int s)				//dfs(bottle�� �ε���,���� ��)
{
	if (x == k)						//bottle�� �ε��� = ���� ����
	{
		if (s >= 1)					//���� ���԰� 1 �̻��̶��
			bottle[s] = 1;			//bottle�� 1�� �־� ������ ���Ը� üũ�Ѵ�.
	}
	else
	{
		//bottle�� �ε����� 1�� ����
		dfs(x + 1, s);					//������ ���� ���Ը� ���� ���Կ� �״�� ��!
		dfs(x + 1, s + arr[x]);			//���� ���Ը� arr[x]��ŭ ����
		dfs(x + 1, s - arr[x]);			//���� ���Ը� arr[x]��ŭ ����
	}

}

int main()
{

	int cnt = 0;					//���� ������ �� ���� �̿��Ͽ����� ������ �Ұ����� ���
	int s = 0, x;					//s = ��� ���� ��, x = ���� ����


	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> arr[i];
		s += arr[i];
	}

	dfs(0, 0);

	for (int i = 1; i <= s; i++)		//bottle=0�� ��츦 ã�Ƽ� cnt�� 1�� ����!
		if (bottle[i] == 0)
			cnt++;

	cout << cnt << endl;


	return 0;
}