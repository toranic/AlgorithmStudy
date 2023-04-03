#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
using namespace std;
typedef long long ll;
struct edge
{
	ll visited = 0;
	ll ans = 1;
	vector<ll> list;
	vector<pair<ll, ll>> dist;
};
edge arr[10];
queue<edge*> qq;
ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
vector<edge*> vvv;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N - 1; i++)
	{
		ll n1, n2, n3, n4;
		cin >> n1 >> n2 >> n3 >> n4;
		ll gcdd = gcd(n3, n4);
		arr[n1].list.push_back(n2);
		arr[n1].dist.push_back({ n3 / gcdd,n4 / gcdd });
		arr[n2].list.push_back(n1);
		arr[n2].dist.push_back({ n4 / gcdd,n3 / gcdd });
	}
	qq.push(&arr[0]);
	while (!qq.empty())
	{
		edge* cnt = qq.front();
		cnt->visited = 1;
		qq.pop();
		while (!cnt->list.empty())
		{
			edge* next = &arr[cnt->list.back()];
			cnt->list.pop_back();
			ll mxmx = cnt->dist.back().first;
			ll mnmn = cnt->dist.back().second;
			cnt->dist.pop_back();
			if (next->visited == 0)
			{
				if (cnt->ans % mxmx != 0)
				{
					for (int v = 0; v < N; v++)
					{
						if (arr[v].visited == 1)
							arr[v].ans *= mxmx;
					}
				}
				next->ans = (cnt->ans *mnmn/mxmx);
				next->visited = 1;
			}
			next->visited = 1;
			qq.push(next);
		}
	}
	for (int i = 0; i < N; i++)
		cout << arr[i].ans << ' ';
}
