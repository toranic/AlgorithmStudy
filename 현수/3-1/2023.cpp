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
bool check(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
void dfs(int n)
{
	int temp = n;
	for (int i = 0; i < N - 1; i++)
	{
		temp /= 10;
	}
	if (temp >= 1 && temp < 10 && check(n))
	{
		cout << n << '\n';
		return;
	}
	for (int i = 1; i <= 9; i++)
	{
		if (check(n))
		{
			dfs(n * 10 + i);
		}
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 2; i < 10; i++)
	{
		if (check(i))
		{
			dfs(i);
		}
	}

	return 0;
}