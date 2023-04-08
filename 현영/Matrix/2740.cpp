#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m, k;
int a[101][101];
int b[101][101];
int answer[101][101];

int main() {

    cin >> n >> m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) {
            cin >> a[i][j];
        }

    cin >> m >> k;

    for(int i=0; i<m; i++) {
        for(int j=0; j<k; j++) {
            cin >> b[i][j];
        }
    }

    for(int f=0; f<n; f++){
        for(int s=0; s<k; s++){
            for(int j=0; j<m; j++)
                answer[f][s] += (a[f][j] * b[j][s]);

            cout << answer[f][s] << " ";
        }
        cout << "\n";
    }
}
