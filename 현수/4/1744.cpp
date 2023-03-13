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
	priority_queue<int,vector<int>,greater<>> pq;
	priority_queue<int> pq2;
	int N;
	cin >> N;
	ll ans=0;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		if (temp > 1)
		{
			pq2.push(temp);
		}
		else if (temp == 1)
		{
			ans += 1;
		}
		else
		{
			pq.push(temp);
		}
	}
	while (pq2.size() >= 2)
	{
		int temp = 0;
		temp += pq2.top();
		pq2.pop();
		temp *= pq2.top();
		pq2.pop();
		ans += temp;
	}
	while (pq.size() >= 2)
	{
		int temp = 0;
		temp += pq.top();
		pq.pop();
		temp *= pq.top();
		pq.pop();
		ans += temp;
	}
	if (!pq.empty())
	{
		ans += pq.top();
		pq.pop();
	}
	if (!pq2.empty())
	{
		ans += pq2.top();
		pq2.pop();
	}
	cout << ans;
	return 0;
}