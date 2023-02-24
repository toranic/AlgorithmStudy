#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 
    
    int n; //사람 수 n
    cin>>n;
    
    vector <int> Pi; //걸리는 시간 Pi
    
    int tmp;
    Pi.push_back(0);
    for(int i=0;i<n;i++){
        cin>>tmp;
        Pi.push_back(tmp);
    }
    
    sort(Pi.begin(),Pi.end());
    
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=Pi[n+1-i]*i;
    }
    cout<<sum;
}
