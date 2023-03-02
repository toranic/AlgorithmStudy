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
    
    visited = vector<bool>(n+1, false);
    
    for(int i=0;i<m;i++){
        int s,e;
        cin>>s>>e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    int count = 0;
    
    for(int i=1;i<n+1;i++){
        if(!visited[i]){ //방문배열의 값이 false일 때
            count++; // 방문하지 않았던 새로운 연결 요소이므로 count++
            DFS(i);
        }
    }
    cout<<count<<"\n";
}

void DFS(int v){
    if(visited[v]){ //방문 이력이 있으면 종료
        return;
    }
    //방분 이력이 없을 경우
    visited[v]=true;
    for(int i : A[v]){ //A[v]에 수가 없을 때까지, i에 A[v][0], A[v][1],...를 차례대로 집어넣는 반복문
        if(visited[i]==false)
            DFS(i); //v의 인접노드가 방문이력이 없으면 DFS를 재귀 돌린다.
    }
}
