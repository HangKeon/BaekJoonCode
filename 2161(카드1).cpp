#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int n;                                  //ī�� ����
	int temp;                               //�ӽ� ����
	vector<int> v;                          //ī�� ����
	queue<int> q;                           //������ ī�带 ����


	cin >> n;

	for (int i = 1; i <= n; i++)
		v.push_back(i);

	for (int i = 0; i < n - 1; i++)
	{
		q.push(v[0]);                       //���� ī�带 ť�� ����

		v.erase(v.begin());                 //ī�带 ����
		temp = v.front();                   //���� ���� �տ� �ִ� ī�带 �ڷ� ������ ���� �ӽ÷� ����
		v.erase(v.begin());                 //���� �տ� �ִ� ī�� ����
		v.push_back(temp);                  //���� �������� ī�带 �ֱ�
	}

	q.push(v[0]);

	while(!q.empty())
	{
		cout << q.front() << ' ';
		q.pop();
	}

	return 0;
}