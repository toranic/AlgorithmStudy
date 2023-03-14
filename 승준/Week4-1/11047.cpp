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

    int num, n, m;
    cin >> num >> m;
    vector<int> v;

    for (int i = 0; i < num; i++) {
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end(), greater<int>());

    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        while (m - v[i] >= 0) {
            cnt++;
            m -= v[i];
        }
    }
    cout << cnt;
}
