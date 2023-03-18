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

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
        cin >> v[i].first;
    }

    sort(v.begin(), v.end());

    int count = 0;
    int end = -1;

    for (int i = 0; i < n; i++) {
        if (v[i].second >= end) {
            end = v[i].first;
            count++;
        }
    }
    cout << count << '\n';
}
