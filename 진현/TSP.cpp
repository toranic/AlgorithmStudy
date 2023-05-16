#include <iostream>
using namespace std;

int * arr;

int tsp(int visit, int now);

int main(void){
    int result;

    int n;
    cin>>n;

    arr = new int[n+1][n+1];
    int tmp;

    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
        cin>>tmp;
        arr[i][j]=tmp;
        }
    }

    result = tsp(1,1);
    cout<<result;
}

int tsp(int visit, int now){
    
}
