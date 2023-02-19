#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    vector<int> heap;
    heap.push_back(0); 
    //heap은 1부터 시작하기 때문에 index=0인 부분 0으로 채워주기
    vector<int> result;
    
    while(int i=0;i<n;i++){
        int op;
        cin >> op;
        if(op==0){
            result.push_back(heap[1]); //첫번째 heap 값 리턴
        }
        else{
            int idx = heap.size(); //힙에 입력될 값의 index
            heap.push_back(op);
            while(idx/2>0){ //부모 노드가 있을 때까지 반복
                if(pow(heap[idx/2],2)>pow(op,2)){ 
                //새로운 수가 절대값이 작은 경우
                
                }
                else if(pow(heap[idx/2],2)>pow(op,2)){
                    
                }
            }
        }
    }
}
