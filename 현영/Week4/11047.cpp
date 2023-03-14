#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> coins;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        coins.push_back(temp);
    }

    int j = n-1;
    int count = 0;
    while(k){
        if(coins[j] <= k){
            count += (k / coins[j]);
            k = k % coins[j];
        }
        else
            j--;
    }

    cout << count;
}