#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;							//������ ��� ��

	cin >> n;

	vector<int> v(n);					//����
	vector<string> s(n);				//�̸�

	for (int i = 0; i < n; i++)			//�Է�
	{
		cin >> v[i] >> s[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)	//���̼� ���� -> �Էµ� ������� ���ĵ�(���̰� �������)
		{
			if (v[j] > v[j + 1])
			{
				int tmp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = tmp;

				string tmp2 = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp2;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << v[i] << " " << s[i] << endl;


	return 0;
}