#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <memory.h>
using namespace std;
typedef long long ll;

int ans[2200][2200];
int ans1 = 0, ans2 = 0, ans3 = 0;

void res(int start, int end)
{
	int result = ans[start][end];
	for (int i = start; i < end; i++)
	{
		for (int j = start; j < end; j++)
		{
			if (result != ans[start][end])
			{
				res(start, (end - start) / 3-1);
				res((end - start) / 3, (end - start) * 2 / 3 - 1);
				res((end - start) * 2 / 3, (end - start) - 1);
				return;
			}
		}
	}
	if (result == 1)
		ans1++;
	else if (result == 0)
		ans2++;
	else
		ans3++;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> ans[i][j];
		}
	}
	res(0, N - 1);
	cout << ans1 << '\n' << ans2 << '\n' << ans3 << '\n';
	return 0;
}