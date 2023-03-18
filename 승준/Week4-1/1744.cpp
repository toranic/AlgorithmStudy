#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool zero = false;
    vector<int> pos, neg;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        if (c > 1) pos.push_back(c);
        if (c == 1) sum += 1;
        if (c == 0) zero = true;
        else neg.push_back(c);
    }

    sort(pos.begin(), pos.end(), greater<int>());    // 양수는 내림차순
    sort(neg.begin(), neg.end(), less<int>());    // 음수는 오름차순
    if (zero) neg.push_back(0);


    for (int i = 0; i < pos.size() - (pos.size() % 2); i += 2) {
        sum += pos[i] * pos[i + 1];
    }
    if (pos.size() % 2 == 1) {
        sum += pos.back();
    }

    for (int i = 0; i < neg.size() - (neg.size() % 2); i += 2) {
        sum += neg[i] * neg[i + 1];
    }

    if (neg.size() % 2 == 1) {

        if (zero == 0) {
            sum += neg.back();
        }
    }

    cout << sum;
}
