#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int A[10000000][5];

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        A[i][0]=tmp/10000;
        A[i][1]=(tmp%10000)/1000;
        A[i][2]=(tmp%1000)/100;
        A[i][3]=(tmp%100)/10;
        A[i][4]=tmp%10;
    }
    
}
