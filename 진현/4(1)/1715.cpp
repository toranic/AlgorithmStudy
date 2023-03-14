#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false); 
		cin.tie(NULL); 
		cout.tie(NULL); 
    
    int N;
    cin>>N;
    vector <int>A(N);
    int result=0;
    
    int k;
    for(int i=0 ; i<N ; i++){
        cin>>k;
        A[i]=k;
    }
    
    sort(A.begin(), A.end());
    
    k=2;
    for(int i=0 ; i<N-1 ; i++){
        int semi_result=0;
        for(int j=0 ; j<k ; j++){
            semi_result += A[j]; 
        }
        result += semi_result;
        cout<<semi_result<<"\n";
        k++;
    }
    cout<<result;
}
