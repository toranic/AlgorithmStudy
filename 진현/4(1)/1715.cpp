#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 
    
    int N;
    cin>>N;
    priority_queue<int, vector<int>, greater<int>> A;
    int result=0;
    
    int k;
    for(int i=0 ; i<N ; i++){
        cin>>k;
        A.push(k);
    }
    
    int fst, sec;
    
    while(A.size() != 1){
        fst = A.top();
        A.pop();
        sec = A.top();
        A.pop();
        
        result += fst+sec;
        A.push(fst+sec);
    }
    
    cout<<result;
}
