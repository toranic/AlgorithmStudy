#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    vector<int> A(n,0); //0 초기화
    int top=-1;
    
    vector<int> result;
    
    int nn=1; //push할 자연수
    
    int i;
    int k;
    
    for(i=0 ; i<n ; i++){
        cin>>k;
        if(k>=nn){
            while(k==nn){
                //time to push
                A.push_back(nn++); 
                top++;
                result.push_back(1);
            }
            A.pop_back();
            top--;
            result.push_back(0);
        }
        else{ //k<nn
            if(A[top]>k){
                result[0]==-1;
                cout<<"a";
            }
            else{
                result.push_back(0);
            }
            A.pop_back();
            top--;
        }
    }
    
    if(result[0]==-1)cout<<"NO"; 
    else{
        for(i=0;i<result.size();i++){
            if(result[i]==0)cout<<"-\n";
            else if(result[i]==1)cout<<"+\n";
        }
    }
    return 0;
}
