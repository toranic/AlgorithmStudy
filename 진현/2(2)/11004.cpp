#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int A[5000000];

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 
    
    int n, n2; 
    cin>>n>>n2;
    
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    sort(A, A+n);
    
    cout<<A[n2-1];
}
