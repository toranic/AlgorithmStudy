#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> cards;
vector<int> targets;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        cards.push_back(k);
    }
    sort(cards.begin(), cards.end());

    cin >> m;
    for(int j=0; j<m; j++) {
        int k;
        cin >> k;
        targets.push_back(k);
    }

    for(int target: targets) {

        int left = 0;
        int right = n - 1;
        while (true) {
            int mid = (left + right) / 2;

            if (left > right) {
                cout << 0 << "\n";
                break;
            }
            else if (target == cards[mid]){
                cout << 1 << "\n";
                break;
            }
            else if (target < cards[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
    }
}