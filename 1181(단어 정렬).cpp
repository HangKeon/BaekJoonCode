#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(const string &s1, const string &s2)
{
	if (s1.size() == s2.size())
		return s1 < s2;

	return s1.size() < s2.size();
}

int main()
{
	vector<string> v;				//�Է��� �ܾ�
	string str;
	int n;							//�ܾ��� ����

	cin >> n;

	for (int i = 0; i < n; i++)		//�ܾ� �Է�
	{
		cin >> str;
		v.push_back(str);
	}


	sort(v.begin(), v.end(), comp);		//����(��������)

	for (int i = 0; i < n; i++)
	{
		if (i != 0)						//�ߺ�����
		{
			if (v[i - 1] == v[i])
				continue;
		}

		cout << v[i] << endl;
	}

	return 0;
}