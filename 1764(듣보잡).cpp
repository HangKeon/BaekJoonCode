#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> v;				//�赵 ���� ������� ����� ����
	vector<string> r;				//v�� ���� ���� ����� ����� ���� ����
	int n, m;						//n = �鵵 ���� ����� ��, m = ���� ���� ����� ��
	int j = 0;

	cin >> n >> m;

	v.resize(n);					//v�� ũ�⸦ n���� �����ϰ� Ȯ��Ǵ� ������ ���� �⺻������ �ʱ�ȭ �Ѵ�

	for (int i = 0; i < n; i++)		//n�� �Է�
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());		//v�� ������������ ����

	string s;

	for (int i = 0; i < m; i++)
	{
		cin >> s;

		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] == s)				//���� v�� s�� ���ٸ�
			{
				r.push_back(s);			//r�� s�� ����
			}
		}

	}

	sort(r.begin(), r.end());		//v�� ������������ ����

	cout << r.size() << endl;
	for (int i = 0; i < r.size(); i++)
		cout << r[i] << endl;


	return 0;
}