#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    vector<int> arr;
    for(int i=0;i<n;i++){int tmp; cin>>tmp; arr.push_back(tmp);}
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap
                int tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    
    for(int i=0;i<n;i++)cout<<arr[i]<<"\n";
}
