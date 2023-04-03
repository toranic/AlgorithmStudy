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
ll ans[5][5];
ll arr[5][5];
ll N, M;
void calcal(ll arr1[5][5],ll arr2[5][5])
{
	ll temp[5][5];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			ll temp2 = 0;
			for (int k = 0; k < N; k++)
			{
				temp2 += arr1[i][k] * arr2[k][j];
			}
			temp2 %= 1000;
			temp[i][j] = temp2;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			arr1[i][j] = temp[i][j];
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0;j < N; j++)
		{
			cin >> arr[i][j];
		}
		ans[i][i] = 1;
	}
	while (M > 0)
	{
		if(M%2==1)
		{
			calcal(ans, arr);
		}
		calcal(arr, arr);
		M /= 2;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << ans[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}