#include <iostream>
using namespace std;

int main()
{
	int t;							//�׽�Ʈ ���̽� ����
	int n;							//�����ؾ� �ϴ� �ð�
	
	
	cin >> t;

	while (t--)
	{
		int arr[5] = { 0, };			//ADDH(+60), ADDT(+10), MINT(-10), ADDO(+1), MINO(-1)

		cin >> n;

		arr[0] += n / 60;			//ADDH�� ������ ����

		n %= 60;

		if (n > 35)					//ADDH 1���ϰ� MINT, MINO�� ���°� Ƚ���� ����
		{
			arr[0]++;				//ADDH 1 ����

			arr[2] = 6 - (n + 5) / 10;		//MINT ������ ���� -> x5������ ū ������ ���°� ����
			n %= 10;

			if (n >= 5)				//MINO�� ����ϴ°� Ƚ���� �� ����.
			{				
				arr[4] += 10 - n;	//MINO�� (10-n) ��ŭ ����
			}
			else					//if(n <= 5) -> ADDO�� ����ϴ°� Ƚ���� �� ����
			{
				arr[3] += n;		//ADDO�� n��ŭ ����
			}
		}
		else						//if(n<=35) -> ADDHT 1���ϰ� ADDO�� ���°� �ξ� ����
		{
			arr[1] = n / 10;		//ADDT�� ������ ����

			n %= 10;

			if (n > 5)				//�� �ڸ� ���϶� n>5�̸� ADDT�� 1�� ����ϰ� MINO�� ����ϴ°� Ƚ���� �� ����.
			{
				arr[1] ++;			//ADDT�� 1 ����

				arr[4] += 10 - n;	//MINO�� (10 - n)��ŭ ����
			}
			else					//�� �ڸ� ���϶� n<=5�̸� ADDO�� ����ϴ°� Ƚ���� �� ����.
			{
				arr[3] += n;		//ADDO�� n��ŭ ����
			}
		}


		for (int i = 0; i < 5; i++)
			cout << arr[i] << ' ';

		cout << endl;
	}

	return 0;
}