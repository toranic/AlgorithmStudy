#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int p[1000];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, p+n);

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += p[i] * (n - i);
	}

	cout << ans;
}
