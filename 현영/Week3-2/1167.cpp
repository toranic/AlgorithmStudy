#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<vector<pair<int, int>>> graph;
vector<int> memo;
vector<bool> visited;

void dij(int start) {
    memo[start] = 0;
    visited[start] = true;
    priority_queue<pair<int, int>> heapq;
    heapq.push(make_pair(start, 0));

    int prev_w, cur;
    while (!heapq.empty()){
        cur = heapq.top().first;
        prev_w = heapq.top().second;
        heapq.pop();

        if(memo[cur] > prev_w)
            continue;

        for(pair<int, int>next : graph[cur]){
            int next_w;
            next_w = next.second + prev_w;

            if(next_w > memo[next.first] && !visited[next.first]){
                memo[next.first] = next_w;
                heapq.push(make_pair(next.first, next_w));
                visited[next.first] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v;
    cin >> v;

    graph.resize(v+1);
    memo.resize(v+1, 0);
    visited.resize(v+1, false);

    for(int i=0; i<v; i++){
        vector<int> temp;
        int k = 0;
        while(k != -1) {
            cin >> k;
            temp.push_back(k);
        }
        temp.pop_back();

        for(int j=1; j<temp.size(); j+=2){
            graph[temp[0]].push_back(make_pair(temp[j], temp[j+1]));
        }
    }

    dij(1);

    int m_node = max_element(memo.begin(), memo.end()) - memo.begin();

    fill(memo.begin(), memo.end(), 0);
    fill(visited.begin(), visited.end(), false);

    dij(m_node);

    cout << *max_element(memo.begin(), memo.end());
}