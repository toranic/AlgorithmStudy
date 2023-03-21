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

    int n, m;

    cin >> n >> m;
    vector<int> v(m + 1,0);

    for (int i = 2; i <= m; i++) {
        v[i] = i;
    }

    for (int i = 2; i * i <= m; i++) {
        if (v[i] == 0) {
            continue;
        }
        for (int j = 2 * i; j <= m; j += i) {
            v[j] = 0;
        }
    }

    for (int i = n; i <= m; i++) {
        if (v[i] != 0)
            cout << v[i] << '\n';
    }
}
