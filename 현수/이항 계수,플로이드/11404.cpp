#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int dist[101][101];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	int a, b, c;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			dist[i][j] = INT_MAX;
		}
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		if (dist[a][b] > c)
			dist[a][b] = c;
	}
	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX)
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j || dist[i][j] == INT_MAX)
				cout << 0 << " ";
			else
				cout << dist[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
