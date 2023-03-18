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

    int size=int(sqrt(N))+1;
    vector <int> arr(size);
    vector <int> almost;

    for(int i=0;i<=size;i++){
        arr[i]=i;
    }
    arr[1]=0;


    for(int i=2;i<=size;i++){
        if(arr[i]!=0) { //변경
            for (int j = i + i; j <= N; j += i) {
                arr[j] = 0; //소수가 아닌 수 0
            }
        }
    }

    for(int i : arr){
        if(arr[i]!=0){
            int tmp=i;
            while(1){
                tmp*=i;
                if(tmp<=N)almost.push_back(tmp);
                else{break;}
            }
        }
    }

    int cnt=0;
    for(int i:almost){
        if(i>=M && i<=N)cnt++;
    }

    cout<<cnt;

    return 0;
}
