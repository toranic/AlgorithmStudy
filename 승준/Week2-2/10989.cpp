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

	int a[10001] = { 0 };

	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;
		a[in] += 1;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < a[i]; j++) {
			cout << i << '\n';
		}
	}
}
