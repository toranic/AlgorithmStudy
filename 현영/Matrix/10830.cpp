#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

long long matrix[5][5];
int n, b;

long long (*mul(long long x[5][5], long long y[5][5]))[5] {
    long long temp[5][5];
    for(int f; f<n; f++){
        for(int s; f<s; f++){
            for(int j; f<j; f++)
                temp[f][s] += (x[f][j] * y[j][s]);
            temp[f][s] %= 1000;
        }
    }
    return temp;
}

long long (*divide(int sz))[5] {
    if (sz == 1)
        return matrix;

    long long (*square_matrix)[5] = divide(sz/2);
    if (sz % 2 == 0)
        return square_matrix;
    else
        return mul(mul(square_matrix, square_matrix), matrix);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> b;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cin >> matrix[i][j];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            matrix[i][j] %= 1000;
    }

    long long (*answer)[5] = divide(b);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout << answer[i][j] << " ";
        cout << "\n";
    }
}