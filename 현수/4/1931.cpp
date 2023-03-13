#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int n;
	cin >> n;
	pair<int, int>* p = new pair<int, int>[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].second >> p[i].first;
	}
	sort(p, p + n);
	int ans = 1,key=p[0].first;
	for (int i = 1; i < n; i++)
	{
		if (key <= p[i].second)
		{
			key = p[i].first;
			ans++;
		}
	}
	cout << ans;
	return 0;
}
