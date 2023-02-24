#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> ans(n,-1);
	stack<int> s;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	for (int i = 0; i < n; i++) {
		while (!s.empty() && v[s.top()] < v[i]) {
			ans[s.top()] = v[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i = 0; i < n; i++) cout << ans[i] << " ";
	return 0;
}
