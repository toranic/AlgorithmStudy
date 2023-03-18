#include <iostream>
#include <algorithm>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> tasks[100000];
    for (int i = 0; i < n; i++) {
        cin >> tasks[i].second >> tasks[i].first;
    }
    sort(tasks, tasks + n);
    
    int cnt = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        if (tasks[i].second >= end) {
            cnt++;
            end = tasks[i].first;
        }
    }
    cout << cnt;
    
    return 0;
}
