#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

int n;
vector<pair<int, int>> meetings;


bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    int s, e;
    for(int i=0; i<n; i++){
        cin >> s >> e;
        meetings.push_back(make_pair(s, e));
    }

    sort(meetings.begin(), meetings.end(), cmp);

    int end;
    end = meetings[0].second;
    meetings.erase(meetings.begin());

    int cnt = 1;
    for(pair meeting: meetings){
        if(end <= meeting.first){
            cnt += 1;
            end = meeting.second;
        }
    }

    cout << cnt;

}