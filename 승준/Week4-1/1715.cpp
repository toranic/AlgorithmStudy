#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
#include<string.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int sum = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        cin >> m;
        pq.push(m);
    }

    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        sum += a + b;
        pq.push(a + b);
    }
    cout << sum << '\n'; 
}
