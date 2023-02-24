//11286
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct compare{
    bool operator()(int o1, int o2){
        int first_abs=abs(o1);
        int second_abs=abs(o2);
        if(first_abs == second_abs){
            return o1>o2;
        }
        else{
            return first_abs > second_abs;
        }
    }
};

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    priority_queue<int, vector<int>,compare> MyQueue;
    
    int op;
    for(int i=0;i<n;i++){
        cin>>op;
        if(op){ //op!=0
            MyQueue.push(op);
        }
        else{ //op==0
            if(MyQueue.empty())cout<<"0\n"; //emmpty
            else{ //not empty
                cout<<MyQueue.top()<<"\n";
                MyQueue.pop();
            }
        }
    }
}
