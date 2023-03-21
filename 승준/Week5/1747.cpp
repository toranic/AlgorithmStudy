#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define MAX 10000001
bool isPalin(int n);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;

    cin >> n;
    long long v[MAX];

    for (int i = 2; i <= MAX; i++) {
        v[i] = i;
    }
    for (int i = 2; i * i <= MAX; i++) {
        if (v[i] == 0) {
            continue;
        }
        for (int j = 2 * i; j <= MAX; j += i) {
            v[j] = 0;
        }
    }

    for (int i = n; i < MAX; i++) {
        if (v[i] != 0) {
            int result = v[i];
            if(isPalin(result)) {
                cout << result << '\n';
                break;
            }
        }
    }

}

bool isPalin(int n) {
    string str = to_string(n);
    for (int i = 0; i < str.size() / 2; i++) {
        if (str[i] != str[str.size() - i - 1])
            return false;
    }
    return true;
}
