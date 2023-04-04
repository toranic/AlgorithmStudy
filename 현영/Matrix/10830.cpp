#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

long long matrix[5][5];
long long temp[5][5];
int n, b;

void mul(long long x[5][5], long long y[5][5]) {
    for(int f; f<n; f++){
        for(int s; f<s; f++){
            for(int j; f<j; f++)
                temp[f][s] += (x[f][j] * y[j][s]);
            temp[f][s] %= 1000;
        }
    }
}

void divide(int size){
    if (size == 1)
        return matrix;

    long long temp[5][5] = {0};
    &temp = divide(size/2);
    if (size % 2 == 0)
        return &square_matrix;
    else
        return mul(mul(temp, temp), matrix)
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> b;

    for(int i; i<n; i++) {
        for(int j; j<n; j++)
            cin >> matrix[i][j];
    }

    for(int i; i<n; i++) {
        for(int j; j<n; j++)
            matrix[i][j] %= 1000;
    }

    long long *answer[5][5];
    answer = &divide(b);
    for(int ans: answer)
        print((" ").join(map(str, ans)));
}