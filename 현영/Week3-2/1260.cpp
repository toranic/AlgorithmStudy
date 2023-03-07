#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<vector<int>>graph(1001);
vector<bool>visited(1001);

void dfs(int cur) {
    visited[cur] = true;
    cout << cur << " ";

    for(int node: graph[cur]){
        if(!visited[node])
            dfs(node);
    }
}

void bfs(int start){
    deque<int>queue;
    queue.push_back(start);
    visited[start] = true;

    int cur;
    while(!queue.empty()){
        cur = queue.front();
        queue.pop_front();
        cout << cur << " ";

        for(int node: graph[cur]) {
            if (!visited[node]) {
                queue.push_back(node);
                visited[node] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, v;
    cin >> n >> m >> v;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=0; i<n+1; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);
    cout << "\n";
    for(int i=0; i<n+1; i++)
        visited[i] = false;
    bfs(v);

}