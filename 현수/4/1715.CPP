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
	int N;
	cin >> N;
	ll ans=0;
	for (int i = 0;i < N; i++)
	{
		int temp;
		cin >> temp;
		pq.push(temp);
	}
	for (int i = 0; i < N-1; i++)
	{
		int temp = 0;
		temp += pq.top();
		pq.pop();
		temp += pq.top();
		pq.pop();
		ans += temp;
		pq.push(temp);
	}
	cout << ans;
	return 0;
}