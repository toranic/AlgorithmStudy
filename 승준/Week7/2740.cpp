#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n, m, e;
int a[101][101], b[101][101];
int result[101][101] = { 0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	cin >> m >> e;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < e; j++)
			cin >> b[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < e; j++) {
			for (int k = 0; k < m; k++) {
				result[i][j] += a[i][k] * b[k][j];
			}
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}
