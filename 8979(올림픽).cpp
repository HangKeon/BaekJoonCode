#include <iostream>
using namespace std;

int main()
{
	int n, k;               //n : ���� ��, k : ����� �˰� ���� ����
	int idx;               //���� ��ȣ
	int cnt = 0;            //k�� �������� �� ���� ������ ��
	int gold[1001];            //�ݸ޴�
	int silver[1001];         //���޴�
	int bronze[1001];         //���޴�

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> idx;
		cin >> gold[idx] >> silver[idx] >> bronze[idx];
	}

	for (int i = 1; i <= n; i++)
		if (gold[i] > gold[k])
			cnt++;
		else if (gold[i] == gold[k])
			if (silver[i] > silver[k])
				cnt++;
			else if (silver[i] == silver[k])
				if (bronze[i] > bronze[k])
					cnt++;

	cout << cnt + 1 << endl;


	return 0;
}