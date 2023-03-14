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

    int k;
    for(int i=0 ; i<N ; i++){
        cin>>k;
        A.push(k);
    }

    int fst, sec;
    int result = 0;

    while(A.size() > 1){
        fst = A.top();
        A.pop();
        sec = A.top();
        A.pop();

        if(fst*sec > fst+sec){ //두 수를 곱한 수가 각 수를 더한 값보다 크다면
            result += fst*sec; //매칭
        }
        else{
            result += fst;
            A.push(sec);
        }
    }

    if(!A.empty()){
        result += A.top();
    }

    cout<<result;
}
