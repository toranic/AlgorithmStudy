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

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll N, k;
	cin >> N >> k;
	ll end = N * N;
	ll start = 1;
	while (start <= end)
	{
		ll mid = (start + end) / 2;
		ll cnt = 0;
		for (int i = 1; i <= N; i++)
		{
			cnt += min(N, mid / i);
		}
		if (cnt >= k)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	cout << start;
	return 0;
}