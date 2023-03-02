#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>>graph(2000);
vector<bool>visited(2000, false);
int answer = 0;

void dfs(int cur, int depth) {
    if(visited[cur])
        return;

    visited[cur] = true;

    for (int node: graph[cur]){
        if(!visited[node]) {
            if(depth==3){
                answer = 1;
                return;
            }
            dfs(node, depth + 1);
        }
    }
    visited[cur] = false;
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

    for(int i=0; i<n; i++){
        dfs(i, 0);
        if(answer==1)
            break;
        fill(visited.begin(), visited.end(), false);
    };
    cout << answer;
}