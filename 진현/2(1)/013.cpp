//2164

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    queue<int> queue; //큐
    for(int i=0;i<n;i++){
        queue.push(i+1);
    }
    while(queue.size()>1){
        queue.pop();
        queue.push(queue.front());
        queue.pop();
    }
    cout<<queue.front();
}
