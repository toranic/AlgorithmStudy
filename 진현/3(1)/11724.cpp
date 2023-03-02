#include <iostream>
#include <vector>
using namespace std;

static vector <vector <int>> A; //인접 리스트
static vector <bool> visited; //방문배열
void DFS(int v); //깊이우선탐색 함수

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    
    int n,m;
    cin>>n>>m;
    //n은 노드의 개수, m은 간선의 개수
    
    A.resize(n+1);
    //vector.resize(size, value)
    //?????
    //가로 B, 세로 A 의 크기를 가지는 AxB 벡터를 모두 0으로 초기화
    //vector.resize(A+1, std::vector<int>(B+1,0));
    
    visited = vector<bool>(N+1, false);
    
    for(int i=0;i<m;i++){
        
    }
    
}
