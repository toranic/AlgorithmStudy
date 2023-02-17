#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int cnt = 1, sum = 1;
	int start = 0, end = 0;

	while (end != (N - 1)) {
		if (sum == N) {
			cnt++;
			end++;
			sum = sum + (end + 1);	//end를 1로 해야했나...
		}
		else if (sum > N) {
			sum = sum - (start + 1);	//start도 1로 하자...
			start++;
		}
		else {
			end++;
			sum = sum + (end + 1);
		}
	}

	cout << cnt;
}