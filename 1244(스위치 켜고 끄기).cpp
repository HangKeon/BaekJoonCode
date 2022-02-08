#include <iostream>
using namespace std;

int main()
{
	int n;							//����ġ�� ����(100 ������ �ڿ���)
	int arr[101];					//����ġ�� ���¸� ������ �迭(0 : ����, 1 : ����)
	int std;						//�л� ��(100 ������ �ڿ���)
	int s, num;						//s : ����(1 : ��, 2 : ��), num : �л��� ���� ����ġ ��ȣ(����ġ ���� ������ �� �� �ϳ�)
	int cnt;						//s�� ������ ���, �¿� ��Ī�� �ؾ� �ϹǷ� �ű� �ε���

	cin >> n;

	for (int i = 1; i <= n; i++)		//arr�� �ε����� ����ġ ��ȣ�� �����ϱ� ���� 1���� ����!
		cin >> arr[i];

	cin >> std;

	for (int i = 0; i < std; i++)
	{
		cin >> s >> num;

		cnt = 0;					//�ʱ�ȭ

		if (s == 1)					//������ ���
		{
			for (int j = num; j <= n; j+=num)	//����ġ�� ���� ����
			{
				if (arr[j] == 0)
					arr[j] = 1;
				else if (arr[j] == 1)
					arr[j] = 0;				
			}
		}
		else if (s == 2)			//������ ���
		{
			while (num - cnt > 0 && num + cnt <= n)			//�¿� ��Ī�� ����ġ ��ȣ�� 1���� �۾����ų� n���� Ŀ���� stop!
			{
				if (arr[num - cnt] == arr[num + cnt])	//���� arr[num]�� �������� �¿� ��Ī�� ����ġ ���°� ���ٸ� -> �ٲ۴�
				{
					if (arr[num + cnt] == 0)
					{
						arr[num + cnt] = 1;
						arr[num - cnt] = 1;
					}
					else if (arr[num + cnt] == 1)
					{
						arr[num + cnt] = 0;
						arr[num - cnt] = 0;
					}
				}
				else									//���� arr[num]�� �������� �¿찡 �ٸ��ٸ� stop!
				{
					break;
				}
				cnt++;
			}
		}
	}

	for (int i = 1; i <= n; i++)		//���
	{
		cout << arr[i] << ' ';

		if (i % 20 == 0)				//�� �ٿ� �ִ� 20���� ����� �Ǿ� �Ѵ�!
		{
			cout << endl;
		}
	}
		
	cout << endl;

	return 0;
}