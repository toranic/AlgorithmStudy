#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

int gcd(ll a, ll b);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;

    ll count = gcd(n, m);

    for (int i = 0; i < count; i++) {
        cout << '1';
    }
    cout << '\n';
}

int gcd(ll a, ll b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
