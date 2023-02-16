#include <iostream>
using namespace std;

int main() {
    int n = 0;
    double scores[1000] = {0, };
    double max = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        if (max < scores[i])
            max = scores[i];
    }

    double s = 0;
    for (int i=0; i < n; i++) {
        s += (scores[i] / max * 100.0);
    }

    cout << s / n;
}