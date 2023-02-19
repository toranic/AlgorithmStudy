#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    priority_queue<pair<int,int>> queue;

    int k;
    for(int i=0; i<n; i++){
        cin >> k;
        if(k == 0) {
            if (queue.empty())
                cout << 0 << "\n";
            else {
                cout << -queue.top().second << "\n";
                queue.pop();
            }
        }
        else if(k > 0)
            queue.push(make_pair(-k, -k));
        else
            queue.push(make_pair(k, -k));
    }

}