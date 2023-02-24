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
	int a[1000001];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	for (int i = 0; i < n; i++)
		cout << a[i] << '\n';
}
