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
	int sum = 0;
	vector <int> arr(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	
	sort(arr.begin(), arr.end());


	for (int i = 0; i < N; i++) {
		sum += (N - i) * arr[i];
	}

	cout << sum << endl;
}