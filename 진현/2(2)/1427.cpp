#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 
    
    string str;
    getline(cin, str);

    cout<<"1";

    vector<int> A;
    int n=str.length();
    
    for(int i=0;i<n;i++){
        A[i]=str[i]-'0';
    }
    
    cout<<"2";
    
    sort(A.begin(),A.end());
    
    for(int i=0;i<n;i++){
        A[n-i-1];
    }
}
