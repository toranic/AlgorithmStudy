#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>>graph(1001);
vector<bool>visited(1001, false);

void dfs(int cur) {
    if(visited[cur])
        return;

    visited[cur] = true;

    for (int node: graph[cur]){
        if(!visited[node])
            dfs(node);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int u, v;
    for(int i=0; i<m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    };

    int count = 0;
    for(int i=1; i<n+1; i++){
        if(!visited[i]) {
            dfs(i);
            count++;
        }
    };
    cout << count;
}