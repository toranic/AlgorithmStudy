#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

static queue <int> Q; //큐
static vector <vector<pair<int,int>>> A; //인접 리스트
static vector<bool> visited;
static vector<int> max_val; //distance
void BFS(int idx);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; //노드 개수
    cin>>n;
    A.resize(n+1);

    for(int i=0; i<n;i++){
        int s, e, w; //start, end, weight
        cin>>s;
        while(1){
            cin>>e;
            if(e==-1)break;
            cin>>w;
            A[s].push_back(pair<int,int>(e,w));
            //A[e].push_back(pair<int,int>(s,w));
        }
    }

    max_val = vector<int>(n+1,0);
    visited = vector<bool>(n+1,false);

    BFS(1);
    int max = 1;

    for(int i=2 ; i<=n ; i++){
        if(max_val[max] < max_val[i]){
            max = i;
        }
    } //max 값 찾기

    //cout<<A[max][0].first;
    max_val = vector<int>(n+1,0);
    visited = vector<bool>(n+1,false);

    BFS(max);
    sort(max_val.begin(),max_val.end());
    cout<<max_val[n]<<"\n";

}

void BFS(int idx){
    Q.push(idx);
    visited[idx] = true;

    while(!Q.empty()){
        int now = Q.front();
        Q.pop();
        for(pair<int,int> i : A[now]){
            if(!visited[i.first]){
                visited[i.first]=true;
                Q.push(i.first);
                max_val[i.first]=max_val[now]+i.second;
            }
        }
    }
}
