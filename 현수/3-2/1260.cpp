#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;
typedef long long ll;
int dist[100001];
int visited[100001];
vector<pair<int,int>> vv[100001];

void bfs(int n)
{
	queue<int> q;
	q.push(n);
	dist[n] = 0;
	visited[n] = 1;
	while (!q.empty())
	{
		cnt = q.front();
		q.pop();
		for (auto next : vv[cnt])
		{
			if (visited[next.first]==0)
			{
				q.push(next.first);
				visited[next.first];
				dist[next.first] = dist[cnt] + next.second;
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int V;
	cin >> V;
	for (int i = 1; i <= V; i++)
	{
		int n1;
		cin >> n1;
		while (1)
		{
			int n2;
			cin >> n2;
			if (n2 == -1)
				break;
			int dd;
			cin >> dd;
			vv[n1].push_back({ n2,dd });
		}
	}
	bfs(1);
	int max = 1;
	for (int i = 1; i <= V; i++)
	{
		if (dist[1] < dist[i])
		{
			max = i;
		}
	}
	memset(dist, 0, sizeof(dist));
	memset(visited, 0, sizeof(dist));
	bfs(max);
	max = 0;
	for (int i = 1; i <= V; i++)
	{
		if (max < dist[i])
		{
			max = dist[i];
		}
	}
	cout << max;
	return 0;
}