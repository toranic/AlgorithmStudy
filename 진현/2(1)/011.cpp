#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    vector<int> origin(n,0);
    for(int i=0 ; i<n ; i++){origin[i]=n-i;}//n,n-1,...,0
    
    vector<int> stack(n,0); //stack
    int top=-1;
    
    vector<int> result(n,0); //result (+:1, -:0)
    
    int tmp=0;
    int i;
    for(i=0 ; i<n ; i++){
        cin>>tmp;
        while(tmp>stack[top]){
            origin.pop_back();//여기 고쳐야함
            stack.push_back();
            result.push_back(1);
            top++;
        }
        if(tmp!=stack[top]){
            cout<<"NO"; 
            i=n+1;//for문 종료
        }
        else{ //tmp==stack[top]
            stack.pop_back();
            result.push_back(0);
            top--;
        }
    }
    
    if(i==n){
        for(int j=0;j<n;j++){
            if(result[j]==0){cout<<"-\n";}
            else{cout<<"+\n";}
        }
    }
    return 0;
}
