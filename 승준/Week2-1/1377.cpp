#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end()); 

	int ans = 0;

	for (int i = 0; i < n; i++) {
		if (ans < (v[i].second - i)) {
			ans = v[i].second - i;
		}
	}

	cout << ans + 1;

	return 0;
}
