#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

long long gcd(long long x, long long y) {
    long long a, b, c;
    if(x>=y){
        a = x;
        b = y;
    }
    else {
        a = y;
        b = x;
    }

    while(a % b != 0){
        c = a % b;
        a = b;
        b = c;
    }

    return b;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> num(n, 0);

    int a, b, p, q;
    int k;
    for(int i=0; i<n-1; i++) {
        cin >> a >> b >> p >> q;
        k = p * q / gcd(p, q);

        for (int j = 0; j < n; j++)
            num[j] = num[j] * k;

        if(!num[a] && !num[b]) {
            num[a] = p;
            num[b] = q;
        }
        else if (!num[a])
            num[a] = num[b] / k;
        else if (!num[b])
            num[b] = num[a] / k;
    }
    for(int i=0; i<n; i++)
        cout << num[i] << " ";
}