#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    queue<int> cards;
    for(int i=0; i<n; i++)
        cards.push(i+1);

    while(cards.size() > 1){
        cards.pop();
        cards.push(cards.front());
        cards.pop();
    }

    cout << cards.front();
}