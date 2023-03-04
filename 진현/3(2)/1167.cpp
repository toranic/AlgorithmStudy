#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

static queue <pair<int,int>> Q; //큐
static vector <vector<pair<int,int>>> A; //인접 리스트

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; //노드 개수
    cin>>n;

    for(int i=0; i<n;i++){
        int s, e, w; //start, end, weight
        cin>>s;
        while(1){
            cin>>e;
            if(e==-1)break;
            cin>>w;
            A[s].push_back(pair<int,int>(e,w));
            A[e].push_back(pair<int,int>(s,w));
        }
    }

}
