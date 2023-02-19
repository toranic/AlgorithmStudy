#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> nums(n, 0);
    for(int i=0; i<n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++)
        cout << nums[i] << "\n";
}