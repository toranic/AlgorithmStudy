#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

#define MAX_SIZE 8

///test case는 동작, but 큰 수에서 오류
ll n, b;
ll arr[MAX_SIZE][MAX_SIZE], tmp[MAX_SIZE][MAX_SIZE], ans[MAX_SIZE][MAX_SIZE];

void strassen(ll A[][MAX_SIZE], ll b, ll n) {
    if (b == 1) { // A^1 = A
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                ans[i][j] = A[i][j];
            }
        }
        return;
    }
    if (b % 2 == 0) { // A^b = (A^(b/2))^2
        strassen(A, b / 2, n);
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                tmp[i][j] = ans[i][j];
            }
        }
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                ans[i][j] = 0;
                for (ll k = 0; k < n; k++) {
                    ans[i][j] += tmp[i][k] * tmp[k][j];
                }
            }
        }
    }
    else { // A^b = A * A^(b-1)
        strassen(A, b - 1, n);
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                tmp[i][j] = ans[i][j];
            }
        }
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                ans[i][j] = 0;
                for (ll k = 0; k < n; k++) {
                    ans[i][j] += A[i][k] * tmp[k][j];
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> b;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    strassen(arr, b, n);

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << ans[i][j]%1000 << " ";
        }
        cout << '\n';
    }
}
