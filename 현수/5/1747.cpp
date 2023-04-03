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
bool arr[1000001000000];

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll min, max;
	cin >> min >> max;
	int ans = max - min+1;
	for (int i = 2; i * i <= max; i++)
	{
		arr[i * i] = true;
	}
	for (int i = min; i <= max; i++)
	{
		if (arr[i] == true)
			ans--;
	}
	cout << ans;
	return 0;
}