#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;
    long long euler = n;
    for (long long p = 2; p * p <= n; p++) {
        if (n % p == 0) euler = euler / p * (p - 1);
        while (n % p == 0) n /= p;
    }

    if (n == 1) cout << euler;
    else cout << euler / n * (n - 1);
}
