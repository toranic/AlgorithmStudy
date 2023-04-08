#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

long long numbers[10000001] = {0,};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    long long a, b;
    cin >> a >> b;

    for(long long i=2; i*i<=b; i++){
        numbers[i] = i;
    }

    for(long long i=2; i*i<=b; i++) {
        for (long long j=i*2; j<=b; j+=i) {
            numbers[j] = 0;
        }
    }

    long long cnt = 0;
    for(long long k=2; k*k<=b; k++){
        if(numbers[k]) {
            long long num = k*k;
            while(num<=b) {
                if(num>=a)
                    cnt++;
                num *= k;
            }
        }
    }

    cout << cnt;


}

