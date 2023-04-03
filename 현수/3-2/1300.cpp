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
int arr[300];
int maxx[300];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	maxx[0] = arr[0];
	maxx[1] = arr[1] + maxx[0];
	for (int i = 2; i < N; i++)
	{
		if (maxx[i - 1] == arr[i - 1] + maxx[i - 2])
		{
			maxx[i] = maxx[i - 2] + arr[i];
		}
		else
		{
			maxx[i] = max(maxx[i - 2], maxx[i - 1]);
			maxx[i] += arr[i];
		}
	}
	cout << maxx[N - 1];
	return 0;
}