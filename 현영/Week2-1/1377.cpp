#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int k;
    vector<pair<int, int>> nums;
    vector<int> result;
    for(int i=0; i<n; i++) {
        cin >> k;
        nums.push_back(make_pair(k, i));
    }

    sort(nums.begin(), nums.end());

    int gap;
    for(int i=0; i<n; i++) {
        gap = nums[i].second - i;
        result.push_back(gap);
    }

    sort(result.begin(), result.end());

    cout << result.back() + 1;
}