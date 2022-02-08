#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <functional>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b)	//������ ���� �������� �������� ����� �Լ�
{
	return (a.second < b.second);
}

int main()
{
	int n;						//ȸ���� ��
	int a, b;					//ȸ�� ���� �ð�, ������ �ð�
	int cnt = 0;				//ȸ���� �ִ� Ƚ��
	int Min;					//���� �������� ���� �ð�ǥ �� ���� ���� ������ �ð� 
	vector<pair<int, int> > v;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		v.push_back({ a,b });
	}

	sort(v.begin(), v.end());					//�켱 v�� first�� �������� ��������
	sort(v.begin(), v.end(), comp);				//�׸��� ���� v�� second�� �������� ��������
	//sort(v.begin(), v.end(), greater<>());
	//sort(v.rbegin(), v.rend());

	Min = v[0].second;
	cnt++;

	for (int i = 1; i < n; i++)
	{
		if (v[i].first >= Min)					//���� ȸ�Ǹ� ������ �ð� >= ���� ȸ���� ������ �ð�
		{
			Min = v[i].second;
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}

//�ݷ�
//3
//2 2
//1 2
//2 3