#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//2001 �ʵ�� 1��

int main()
{
	int a, b;					//a : ����, b : ����
	int n;						//Į�� �߶�� �ϴ� ������ ����
	int x, y;					//x : ����(0), ����(1), y = ���� ��ȣ
	int max = 0;				//������ �ִ��� ������ ����
	vector<int> zero;			//���η� �ڸ��� ���� -> ������ ��ȣ�� ����
	vector<int> one;			//���η� �ڸ��� ���� -> �ʺ��� ��ȣ�� ����

	cin >> a >> b;

	zero.push_back(b);			//���̸� �߰� -> ������ ���� ��ȣ
	one.push_back(a);			//�ʺ� �߰� -> �ʺ��� ���� ��ȣ

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		if (x == 0)				//���η� �ڸ��� ���
			zero.push_back(y);	//������ ��ȣ�� ����
		else					//���η� �ڸ��� ���
			one.push_back(y);	//�ʺ��� ��ȣ�� ����
	}

	//������������ ����
	sort(zero.begin(), zero.end());
	sort(one.begin(), one.end());

	for (int i = one.size()-1; i > 0; i--)
	{
		one[i] = one[i] - one[i - 1];
	}

	for (int i = zero.size()-1; i >0 ; i--)
	{
		zero[i] = zero[i] - zero[i - 1];
	}

	//������������ ����
	sort(zero.begin(), zero.end());
	sort(one.begin(), one.end());


	for (int i = 0; i < one.size(); i++)
	{
		for (int j = 0; j < zero.size(); j++)
		{
			if (max < one[i] * zero[j])
				max = one[i] * zero[j];
		}
	}

	cout << max;


	return 0;
}