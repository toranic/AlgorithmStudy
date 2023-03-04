#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

static vector <vector <int>> A; //인접 리스트
static vector <bool> visited; //방문배열
void DFS(int v); //깊이우선탐색 함수
void BFS(); //너비우선탐색 함수
static queue<int> Q; //BFS에 쓸 큐

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, edge, start; //node, edge, start point
    cin>>n>>edge>>start;

    A.resize(n+1);
    visited = vector <bool>(n+1, false);

    for(int i=0 ; i<edge ; i++){ //엣지 수 만큼 for loop
        int s,e;
        cin>>s>>e;

        A[s].push_back(e);
        A[e].push_back(s);
    }
    for(int i=0 ; i<n ; i++){ //정렬, push_front기능을 찾아봤는데 없음...sort가 최선인가?!
        sort(A[i].begin(), A[i].end());
    }

    DFS(start); cout<<"\n";
    visited = vector <bool>(n+1, false); //방문이력 초기화

    Q.push(start);
    BFS();
}

void DFS(int v){
    if(visited[v]){ //방문 이력이 있으면 종료
        return;
    }
    cout<<v<<" ";
    //방분 이력이 없을 경우
    visited[v]=true;
    for(int i : A[v]){ //A[v]에 수가 없을 때까지, i에 A[v][0], A[v][1],...를 차례대로 집어넣는 반복문
        if(visited[i]==false)
            DFS(i); //v의 인접노드가 방문이력이 없으면 DFS를 재귀 돌린다.
    }
}

void BFS(){
    while(!Q.empty())//큐가 비어 있지 않을 때까지 반복
    {
        int node;
        node = Q.front(); //앞 데이터 반환
        Q.pop(); //node pop

        if (visited[node] == false) {
            cout << node << " ";
            visited[node] = true;

            for (int i: A[node]) {
                if (visited[i] == false)
                    Q.push(i);
            }
        }
    }
}
