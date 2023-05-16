#include <iostream>
#include <queue>
using namespace std;
int map[9][9];
vector<pair<int, int>> vv;
int N;
bool found = false;
bool check(int y, int x)
{
	bool key = true;
	for (int i = 0; i < 9; i++)
	{
		if (map[y][i] == map[y][x] && i != x)
		{
			key = false;
			return false;
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (map[i][x] == map[y][x] && i != y)
		{
			key = false;
			return false;
		}
	}
	int tempy = y / 3;
	int tempx = x / 3;
	tempy *= 3;
	tempx *= 3;
	for (int i = tempy; i < tempy + 3; i++)
	{
		for (int j = tempx; j < tempx + 3; j++)
		{
			if (map[y][x] == map[i][j] && y != i && x != j)
			{
				key = false;
				return key;
			}
		}
	}
	return key;
}

void bfs(int n)
{
	if (n == N)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << map[i][j] << ' ';
			}
			cout << '\n';
		}
		found = true;
		return;
	}
	for (int i = 1; i <= 9; i++)
	{
		map[vv[n].first][vv[n].second] = i;
		if (check(vv[n].first, vv[n].second))
			bfs(n + 1);
		map[vv[n].first][vv[n].second] = 0;
		if (found == true)
			return;
	}
}

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int temp;
			cin >> temp;
			map[i][j] = temp;
			if (temp == 0)
			{
				N++;
				vv.push_back({ i,j });
			}
		}
	}
	bfs(0);
}