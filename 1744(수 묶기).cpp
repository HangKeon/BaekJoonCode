#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//<���� ����>
//1) ����� ��� ū ������ ���ؾ� ū ���� ������ ���̴�.
//2) ���� ���� ���밪�� ū �������� ���ϸ� ������ ���� Ŀ�� ���̴�.
//3) 1�� ���ϴ� �� ���� ���ϴ� �� ������� Ŀ���� �ȴ�.
//4) ������ ������ Ȧ���� �� ������ ���� �� ���� ������ 0�� �����ִ� �� ������� ���� Ŀ���� �ȴ�.

int main()
{
	int n;							//������ ũ��
	int temp;						//�Է°�
	int zero = 0;					//0�� ������ ����
	int one = 0;					//1�� ������ ����
	int sum;						//�ִ� ��
	vector<int> pos;				//����� ����(1���� ū ���)
	vector<int> neg;				//������ ����

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		if (temp > 1)
			pos.push_back(temp);
		else if (temp < 0)
			neg.push_back(-temp);	//���߿� �������� �����ϱ� ���� ������ �ٿ���
		else if (temp == 0)
			zero++;
		else
			one++;
	}

	if (pos.size() % 2 == 1)		//����� Ȧ������ ��� -> 1�� �߰��� ¦�� ���� �����
		pos.push_back(1);			//�ֳ��ϸ� ������� ������ ���ε�, ��ȣ�� 2���� 1���� ������ �ϱ� ����

	if (neg.size() % 2 == 1)		//������ Ȧ������ ��� -> ������ ������ �� 1���� ������ ��
	{
		if (zero == 0)				//0�� ���ٸ� -> ���� ���� ���� ������ �ٲ���. �׷��� -1�� �߰�!
			neg.push_back(-1);
		else						//0�� �ִٸ� -> ���� 1���� 0�� ���ϵ��� ��! => 4�� ����
			neg.push_back(0);
	}

	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end());

	sum = one;

	for (int i = 0; i < pos.size(); i += 2)	
		sum += pos[i] * pos[i + 1];

	for (int i = 0; i < neg.size(); i+=2)
		sum += neg[i] * neg[i + 1];

	cout << sum << endl;

	return 0;
}