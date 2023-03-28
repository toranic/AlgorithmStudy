#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

int lcm(int x, int y) {
    int a, b, c;
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

    return x*y / b;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b;
    for(int i=0; i<t; i++) {
        cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }

}