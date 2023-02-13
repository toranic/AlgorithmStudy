#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num, k;
	cin >> num >> k;
	vector<long> arr(num, 0);
	vector<long> arrDiv(k, 0);
	cin >> arr[0];
	long cnt = 0;

	for (int i = 1; i < num; i++) {
		int cur;
		cin >> cur;
		arr[i] = arr[i - 1] + cur;
	}

	for (int i = 0; i < num; i++) {
		int remainder = arr[i] % k;

		if (remainder == 0) {
			cnt++;
		}
		arrDiv[remainder]++;
	}

	for (int i = 0; i < k; i++) {
		if (arrDiv[i] > 0) {
			cnt = cnt + ((arrDiv[i] * (arrDiv[i] - 1) )/ 2);
		}
	}

	cout << cnt << "\n";

}