#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
vector<pair<int, int>> vv;
int N;
int dp[16][(1 << 16)];
int map[16][16];
int tcp(int i, int j)
{
	if (dp[i][j] != -1)
		return dp[i][j];
	if (j == (1<<N)-1)
	{
		if (map[i][0] != 0)
			return map[i][0];
		else
			return 987654321;
	}
	dp[i][j] = 987654321;
	for (int q = 0; q < N; q++)
	{
		if (map[i][q] == 0 || (j & (1 << q)))
			continue;
		dp[i][j] = min(dp[i][j], tcp(q, (j | (1 << q)))+map[i][q]);
	}
	return dp[i][j];
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}
	fill(&dp[0][0], &dp[0][0] + 16 * (1 << 16), -1);
	cout << tcp(0, 1)<<endl;
}