#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

static int A[101][101]={0}; //미로
static bool visited[101][101]={false}; //방문이력
void BFS(int n, int m); //너비 우선 탐색
static queue <pair<int,int>> Q;
//너비 우선 탐색 구현에 쓰일 큐 //X,Y값 pair를 element로 갖는 큐
static pair<int,int> T[4]={
        pair<int,int>(-1,0),
        pair<int,int>(1,0),
        pair<int,int>(0,1),
        pair<int,int>(0,-1),
        }; //상하좌우 이웃

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; //nxm 세로n 가로m
    cin>>n>>m;

    for(int i=1 ; i<n+1 ; i++){
        string a;
        cin >> a;
        for(int j=1;j<m+1;j++) {
            A[i][j]=a[j-1]-'0';
        }
    }

    Q.push(pair<int,int>(1,1));
    BFS(n,m);
    cout<<A[n][m];
}


int depth=1;

void BFS(int n,int m){
    while(A[n][m]==1)//(N,M)의 수가 바뀔 때까지 반복
    {
        depth++;
        pair<int,int> node;
        node = Q.front(); //앞 데이터 반환
        Q.pop(); //node pop

        if (visited[node.first][node.second] == false) {

            visited[node.first][node.second] == true;

            for (int i=0;i<4;i++){
                int fst = T[i].first + node.first;
                int sec = T[i].second + node.second; //상하좌우로 접근
                if(visited[fst][sec]==false && A[fst][sec]!=0 && fst>0 && sec>0 && fst<=n && sec<=m){
                    //접근 이력이 없고 통행이 가능하다면
                    A[fst][sec] = depth;
                    Q.push(pair<int,int>(fst,sec));
                }
            }
        }
    }
    return;
}
