#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int start = 1;
    int end = 2;
    int sum = 3;
    int count = 1;

    while(start < end){
        if(sum == n){
            count += 1;
            sum -= start;
            start += 1;
        }
        if(sum < n){
            end += 1;
            sum += end;
        }
        else{
            sum -= start;
            start += 1;
        }
    }

    cout << count;

}