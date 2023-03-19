#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long M, N; //from M to N //????????왜 long이어야하는가????????????
    cin>>M>>N;

    int size = int(sqrt(N)+1);
    vector <long> arr(size);

    //long arr[10000001];
    //int size = 10000001;

    for(int i=0;i<size;i++){
        arr[i]=i;
    }
    arr[1]=0;

    for(int i=2;i<=sqrt(size);i++){
        if(arr[i]!=0) {
            for (int j = i + i ; j < size ; j += i) {
                arr[j]=0;
            }
        }
    }

    int cnt = 0;

    for(int i=2 ; i<size ; i++){
        if(arr[i]!=0){ //소수이면
            long temp = i;
            while((double)arr[i]<=(double)N / (double)temp){
                if((double)arr[i]>=(double)M/(double)temp){
                    cnt++;
                }
                temp = temp*arr[i];
            }
        }
    }

    cout<<cnt;

    return 0;
}
