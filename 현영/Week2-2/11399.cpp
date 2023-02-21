#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int>minutes(n, 0);

    for(int i=0; i<n; i++)
        cin >> minutes[i];

    sort(minutes.begin(), minutes.end());

    int sum = minutes[0];
    int temp = minutes[0];
    for(int i=1; i<n; i++) {
        sum += (temp + minutes[i]);
        temp += minutes[i];
    }

    cout << sum;

}