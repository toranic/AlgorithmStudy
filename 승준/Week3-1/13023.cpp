#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n, m;
bool found;
vector<int> v[2000];
bool visited[2000];
void dfs(int depth, int cur);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    found = false;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        v[s].push_back(e);
        v[e].push_back(s);
    }
    for (int i = 0; i < n; i++) {
        dfs(i, 0);
        if (found) {
            break;
        }
    }
    cout << found;
}

void dfs(int cur, int depth) {
    if (depth == 4) {
        found = true;
        return;
    }
    visited[cur] = true;

    for (int i = 0; i < v[cur].size(); i++) {
        int next = v[cur][i];
        if (!visited[next] && !found) {
            dfs(next, depth + 1);
        }
    }

    for (int i : v[cur]) {
        if (!visited[i]) {
            dfs(i, depth + 1);
        }
    }
    visited[cur] = false;

}
