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
int N,M;
int mapp[101][101];
int dist[101][101];
int visited[101][101];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };

void bfs(void)
{
	queue<pair<int, int>> q;
	q.push({1,1});
	dist[1][1] = 1;
	visited[1][1] = 1;
	while (!q.empty())
	{
		int cntx = q.front().first;
		int cnty = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nextx = cntx + dx[i];
			int nexty = cnty + dy[i];
			if (nextx > 0 && nexty > 0 && nextx <= N && nexty <= M)
			{
				if (visited[nextx][nexty] == 0&&mapp[nextx][nexty]==1)
				{
					q.push({ nextx,nexty });
					visited[nextx][nexty] = 1;
					dist[nextx][nexty] = dist[cntx][cnty] + 1;
				}
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < M; j++)
		{
			mapp[i][j+1] = s[j]-'0';
		}
	}
	bfs();
	cout << dist[N][M];
	return 0;
}