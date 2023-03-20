#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N; //from M to N
    cin>>M>>N;
    vector <int> arr(N+1);

    for(int i=0;i<=N;i++){
        arr[i]=i;
    }
    arr[1]=0;

    for(int i=2;i<=sqrt(N);i++){
        if(arr[i]!=0 && arr[i]!=1) {
            for (int j = i + i; j <= N; j += i) {
                arr[j]=0;
            }
            for (int j = i * i; j <= N; j *= i) {
                arr[j]=1;
            }
        }
    }


    int cnt=0; //제곱 ㅇㅇ 수

    for(int i=M ; i<=N ; i++){
        if(arr[i]!=1)cnt++;
    }

    cout<<cnt;

    return 0;
}
