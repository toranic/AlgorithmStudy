#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> cards;
vector<int> temp_sum;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        cards.push(temp);
    }

    int cnt = 0;
    if(cards.size() > 2) {
            while(!cards.empty()){
                temp_sum.push_back(cards.top());
                cards.pop();

                if(temp_sum.size() == 2) {
                    cnt += (temp_sum.front() + temp_sum.back());
                    cards.push(temp_sum.front() + temp_sum.back());
                    temp_sum.pop_back();
                    temp_sum.pop_back();
                }
        }
    }
    else if(cards.size() == 2) {
        cnt += cards.top();
        cards.pop();
        cnt += cards.top();
    }

    cout << cnt;

}