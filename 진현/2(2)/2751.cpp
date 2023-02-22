#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int A[1000000];

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    sort(A, A+n);
    
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\n";
    }
}
