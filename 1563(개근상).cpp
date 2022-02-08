#include <iostream>
using namespace std;

int dp[1001][3][4] = { 0, };
int n;									//�б� ���� �ϴ� �� ��

int func(int day, int Lcnt, int Acnt)	//func(�б� �����ϴ� �� ��, ���� �� ��, ���� �Ἦ �� ��)
{
	if (Lcnt >= 2 || Acnt >= 3)
		return 0;

	if (day == n)
		return 1;

	int &ref = dp[day][Lcnt][Acnt];

	if (ref != -1)
		return ref;

	return ref = (func(day + 1, Lcnt, 0) + func(day + 1, Lcnt + 1, 0) + func(day + 1, Lcnt, Acnt + 1)) % 1000000;
}

int main()
{
	cin >> n;

	memset(dp, -1, sizeof(dp));

	cout << func(0, 0, 0) << endl;

	return 0;
}