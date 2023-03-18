#include <iostream>
#include <vector>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int result = 0;
    
    for (int i = 0; i < n; i++){
        cin >> v.at(i);
    }
    
    for (int i = n-1; i >= 0; i--){
        result += (k / v[i]);
        k %= v[i];
    }
    
    cout << result << '\n';
    
    return 0;
}
