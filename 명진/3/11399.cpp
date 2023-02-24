#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main(){
    
    int N;
    int sum;
    cin >> N;
    vector<int>A(N, 0);
    vector<int>S(N, 0);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    S[0] = A[0];
    for (int i = 1; i < N; i++){
        S[i] = S[i-1] + A[i];
    }
    
    sum = accumulate(S.begin(), S.end(), 0);
    cout << sum;
    
}
