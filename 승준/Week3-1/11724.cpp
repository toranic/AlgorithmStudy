#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n, m;
int map[1001][1001] = { 0, };
bool visited[1001] = { 0, };
void DFS(int v);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            DFS(i);
            count++;
        }
    }

    cout << count << endl;
}

void DFS(int v) {
    visited[v] = true;

    for (int i = 1; i <= n; i++) {
        if (map[v][i] == 1 && visited[i] == 0) {
            visited[i] = 1;
            DFS(i);
        }
    }
}
