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

ll B[1001][1001];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll N, k;
	cin >> N >> k;

	for (int i = 0; i <= N; i++)
	{
		B[i][0] = 1;
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; (j <= i && j <= k); j++)
		{
			B[i][j] = B[i - 1][j - 1] + B[i - 1][j];
			B[i][j] %= 10007;
		}
	}
	cout << B[N][k];
	return 0;
}