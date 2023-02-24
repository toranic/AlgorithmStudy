#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	stack<int> stk;
	bool found = true;

	vector<int> s(n);
	vector<char> ans;
	int num = 1;


	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < n; i++) {
		int cur_num = s[i];
		if (cur_num >= num) {
			while (cur_num >= num) {
				stk.push(num++);
				ans.push_back('+');
			}
			stk.pop();
			ans.push_back('-');
		}
		else {
			int n = stk.top();
			stk.pop();

			if (n > cur_num) {
				cout << "NO" << '\n';
				found = false;
				break;

			}
			else {
				ans.push_back('-');
			}
		}
	}
	if (found) {
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << '\n';
		}
	}
}
