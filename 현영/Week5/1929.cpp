#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

vector<int> numbers;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    numbers.resize(n+1, 0);

    for(int i=2; i<=n; i++){
        numbers[i] = i;
    }

    for(int i=2; i*i<=n; i++) {
        for (int j=i*2; j<=n; j+=i) {
                numbers[j] = 0;
        }
    }

    for(int k=m; k<=n; k++){
        if(numbers[k])
            cout << numbers[k] << "\n";
    }
}