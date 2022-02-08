#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[1001];		//���ð� ����Ǿ� ������ ǥ���ϱ� ���� ����
//int visited[1001] = { 0, };			//������ �湮�� Ȯ���ϴ� �迭
//int arr[101];					//��°� ����
int k;						//�迭 a�� �ε���
int cnt;					//��� ���� ���� ���� �ּ� ����� ����

void bfs(int s)				//bfs(����ϴ� ����)
{
	queue<int> q;
	int visited[1001] = { 0, };			//������ �湮�� Ȯ���ϴ� �迭
	cnt = 0;				//�׽�Ʈ ���̽� ����ŭ Ȯ���ؾ� �ϹǷ� �ʱ�ȭ �ʿ�!

	q.push(s);
	visited[s] = 1;			//�湮ó��

	while (!q.empty())
	{
		int x = q.front();

		q.pop();

		for (int i = 0; i < v[x].size(); i++)
		{
			int y = v[x][i];

			if (!visited[y])
			{
				q.push(y);
				visited[y] = 1;
				cnt++;
			}
		}
	}

	cout << cnt << endl;
	//arr[k++] = cnt;
}

/*void dfs(int x)
{
	visited[x] = 1;



}*/

int main()
{
	int t;					//�׽�Ʈ ���̽� ��
	int n, m;				//n : ������ ��, m : ����� ����
	int a, b;				//a�� b�� �պ��ϴ� ����� ����

	cin >> t;


	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;

		for (int j = 0; j < m; j++)
		{
			cin >> a >> b;

			v[a].push_back(b);
			v[b].push_back(a);
		}

		bfs(1);

		for (int j = 0; j < n; j++)			//���� �׽�Ʈ Ÿ���� �Է��� ��� �ٽ� ������ ���� ����� �Ѵ�
			v[j].clear();					//�ƴϸ� ���� ���� ������ ��ģ��
	}

	//for (int i = 0; i < k; i++)
	//	cout << arr[i] << endl;

	return 0;
}

//for (int j = 0; j < n; j++)
//	v[j].clear();
//���� �ڵ尡 ���ٸ� �Ʒ� ���ÿ��� ������ �����.
/*2
5 6
1 2
1 3
1 4
1 5
2 3
3 4
3 3
1 2
2 3
1 3
*/