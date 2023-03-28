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

    long long a, b;
    cin >> a >> b;
    int k;
    k = gcd(a, b);

    for(int i=0; i<k; i++)
        cout << 1;

}