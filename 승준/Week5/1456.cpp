#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;
#define MAX 10000001
int p[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	long long i, j;
	for (i = 2; i < MAX; i++) {
		if (p[i] == false) {
			for (j = (i * i); j < MAX; j += i)
				p[j] = true;
		}
	}

	long long A, B, ans = 0;
	cin >> A >> B;

	for (i = 2; i < MAX; i++) {
		if (i * i > B)
			break;

		if (p[i] == false) { 
			long long temp = i * i;
			while (temp <= B) {
				if (A <= temp) {
					ans++;
				}
				temp *= i;
				if (temp % i != 0)
					break;
			}
		}
	}
	cout << ans;
}
