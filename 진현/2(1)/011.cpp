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
    bool state=true;
    
    result.push_back(1);
    
    for(i=0 ; i<n ; i++){
        cin>>k;
        if(k>=nn){
            while(k!=nn){
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
                state=false;
                cout<<"NO";
                i=n+1;
            }
            else{
                result.push_back(0);
            }
            A.pop_back();
            top--;
        }
    }
    
    if(state){
        for(i=0;i<result.size();i++){
            if(result[i]==0)cout<<"-\n";
            else if(result[i]==1)cout<<"+\n";
        }
    }
    return 0;
}
