#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> A; //데이터 벡터
vector <int> B; //찾아야 할 수 벡터

void binary_search(int start, int end, int target);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; // 데이터 개수, 찾아야 할 숫자 개수
    cin>>n;
    //A.resize(n+1);

    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        A.push_back(tmp);
    }

    cin>>m;
    for(int i=0;i<m;i++){
        cin>>tmp;
        B.push_back(tmp);
    }

    sort(A.begin(), A.end());

    for(int i:B) {
        binary_search(0, n-1, i);
    }
}

void binary_search(int start, int end, int target){
    int front, mid, rear;
    front=start; rear=end;
    while(front<=rear){
        mid=(front+rear)/2;
        if(A[mid]>target){ //중앙값이 타겟보다 크다면
            return binary_search(front, mid-1, target);
        }
        else if(A[mid]<target){
            return binary_search(mid+1, rear, target);
        }
        else{
            break; //탐색 성공, while문 탈출
        }
    }
    if(front<=rear){cout<<"1\n";}
    else{cout<<"0\n";}
}
