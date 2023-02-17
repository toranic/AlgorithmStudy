#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m = 0;
    cin >> n >> m;

    int sums[1025][1025] = {0};
    int num = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> num;
            sums[i][j] = sums[i][j-1] + sums[i-1][j] - sums[i-1][j-1] + num;
        }
    }

    for (int i = 1; i <= m; i++) {
        int x1, x2, y1, y2 = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sums[x2][y2] - sums[x1-1][y2] - sums[x2][y1-1] + sums[x1-1][y1-1] << "\n";
    }
}