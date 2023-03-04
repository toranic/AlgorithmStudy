#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool prime(int n);
void DFS(int n, int count);
int N;
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	
	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
	return 0;
	
}

bool prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return 0;	
	}
	return 1;
}

void DFS(int n, int count) {
	if (prime(n)) {
		if (count == N) {
			v.push_back(n);
		}

		for (int i = 1; i < 10; i++) {
			DFS(n * 10 + i, count + 1);
		}
	}
	else return;
}
