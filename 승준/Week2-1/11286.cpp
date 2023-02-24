#include <iostream>
#include <queue>
using namespace std;

struct cmp {
	bool operator()(int a, int b) {
		int abs1 = abs(a);
		int abs2 = abs(b);
		if (abs1 == abs2) {
			return a > b;
		}
		return abs1 > abs2;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int, vector<int>, cmp> pq;

	int n;
	cin >> n;

	for (int i=0; i < n; i++) {
		int req;
		cin >> req;

		if (req == 0) {
			if (pq.empty()) {
				cout << "0" << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else {
			pq.push(req);
		}
	}
}
