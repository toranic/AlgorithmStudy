#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m = 0;
    cin >> n >> m;

    int num = 0;
    int sums[100001];

    for (int k = 1; k <= n; k++) {
        cin >> num;
        sums[k] = sums[k-1] + num;
    }

    for (int k = 0; k < m; k++) {
        int i, j;
        cin >> i >> j;
        cout << sums[j] - sums[i-1] << "\n";
    }
}