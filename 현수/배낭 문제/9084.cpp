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
int arr[20];
int ans[10001];
int main(void)
{
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int M;
		int N;
		cin >> N;
		for (int n = 0; n < N; n++)
		{
			cin >> arr[n];
		}
		cin >> M;
		for (int m = 0; m <= M; m++)
		{
			ans[m] = 0;
		}
		for (int n = 0; n < N; n++)
		{
			ans[arr[n]]++;
			for (int m = arr[n]; m <= M; m++)
			{
				ans[m] += ans[m - arr[n]];
			}
		}
		cout << ans[M] << '\n';
	}
}