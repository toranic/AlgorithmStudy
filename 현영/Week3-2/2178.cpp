#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int n, m;
int graph[101][101];
bool visited[101][101] = {false, };

void bfs(int x, int y){
    deque<pair<int, int>>queue;
    queue.push_back(make_pair(x, y));
    visited[x][y] = true;

    pair<int, int> cur;
    while(!queue.empty()){
        cur = queue.front();
        queue.pop_front();

        vector<pair<int, int>> num;
        num.push_back(make_pair(1, 0));
        num.push_back(make_pair(-1, 0));
        num.push_back(make_pair(0, 1));
        num.push_back(make_pair(0, -1));

        for(int i=0; i<4; i++) {
            pair<int, int> next;
            next = make_pair(cur.first + num[i].first, cur.second + num[i].second);

            // 범위 벗어났을 때 예외처리
            if (0 <= next.first && next.first < n && 0 <= next.second && next.second < m) {
                if (!visited[next.first][next.second] && graph[next.first][next.second]) {
                    graph[next.first][next.second] += graph[cur.first][cur.second];
                    queue.push_back(next);
                    visited[next.first][next.second] = true;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        string line;
        cin >> line;
        for(int j=0; j<m; j++) {
            graph[i][j] = line[j] - '0';
        }
    }
    bfs(0, 0);
    cout << graph[n-1][m-1];
}