#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int left = 1;
    int right = k;
    while (true) {
        int mid = (left + right) / 2;

        int cnt = 0;
        for(int i=1; i<n+1; i++) {
            int x = mid / i;
            cnt += min(x, n);
        }

//        cout << cnt << " " << mid << endl;

        if (left >= right) {
            cout << mid;
            break;
        }
        else if (cnt >= k)
            right = mid;
        else
            left = mid + 1;
    }
}