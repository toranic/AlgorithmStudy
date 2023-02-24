#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int idx[10001] = { 0 };
	int k;

	for (int i = 0; i < N; i++) {
		cin >> k;
		idx[k]++;
	}

	for (int i = 0; i <= 10000; i++) {
		if (idx[i] != 0) {
			for (int j = 0; j < idx[i]; j++) {
				cout << i << '\n';
			}
		}
	}
}