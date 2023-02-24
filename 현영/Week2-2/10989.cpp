#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count[10001]={0};

    int n;
    cin >> n;
    int temp;
    for(int i=0; i<n; i++) {
        cin >> temp;
        count[temp]++;
    }
    for(int i=1; i<10001; i++){
        while(count[i]){
            cout << i << "\n";
            count[i]--;
        }
    }
}