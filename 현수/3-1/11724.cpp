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
vector<int> vv[1001];
int visited[1001];

void dfs(int s)
{
	stack<int> ss;
	ss.push(s);
	visited[s] = 1;
	while (!ss.empty())
	{
		int cnt = ss.top();
		ss.pop();
		for (auto next : vv[cnt])
		{
			if (visited[next] == 0)
			{
				visited[next] = 1;
				ss.push(next);
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, ans=0;
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;
		vv[s].push_back(e);
		vv[e].push_back(s);
	}
	for (int i = 1; i <= N; i++)
	{
		if (visited[i] == 0)
		{
			ans++;
			dfs(i);
		}
	}
	cout << ans;
	return 0;
}