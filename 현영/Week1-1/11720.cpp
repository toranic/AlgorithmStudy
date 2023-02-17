#include <iostream>
using namespace std;

int main() {
    int n = 0;
    string nums;
    cin >> n;
    cin >> nums;

    int s = 0;
    for (int i=0; i < n; i++) {
        s += nums[i] - '0';
    }

    cout << s;
}
