#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <long long> A;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; //노드 개수
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a = i*j;
            A.push_back(a);
        }
    }

    sort(A.begin(), A.end());

    int t; //target
    cin>>t;
    cout<<A[t];
}
