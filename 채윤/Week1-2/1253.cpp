#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[2000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+N);

	for (int i = 0; i < N; i++) {
		int k = arr[i];
		int a = 0;
		int b = N - 1;

		while (a < b) {
			int j = arr[a] + arr[b];
			if (j == k) {
				if (a != i && b != i) {
					cnt++;
					break;
				}
				else if (a == i) {
					a++;	//0 3 3과 같은 경우 
				}
				else if (b == i) {
					b--;
				}
			}
			else if (j < k) {
				a++;
			}
			else {
				b--;
			}
		}

	}

	cout << cnt;
	return 0;
}