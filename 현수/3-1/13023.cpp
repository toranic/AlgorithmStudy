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
int N;
int visited[2000];
vector<int> vv[2000];
bool ans;
void dfs(int n, int cnt)
{
	if (cnt == 5)
	{
		ans=true;
		return;
	}
	for (auto next : vv[n])
	{
		if (visited[next] == 0)
		{
			visited[next] = 1;
			dfs(next, cnt + 1);
			visited[next] = 0;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		vv[n1].push_back(n2);
		vv[n2].push_back(n1);
	}
	ans = false;
	for (int i = 0; i < N; i++)
	{
		visited[i] = 1;
		dfs(i, 1);
		visited[i] = 0;
		if (ans == true)
			break;
	}
	cout << ans;
	return 0;
}