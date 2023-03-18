#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false); 
		cin.tie(NULL); 
		cout.tie(NULL); 
    
    int N, K;
    int result = 0;
    
    cin >> N >>K;
    
    int coin[10];
    
    for(int i=0 ; i<N ; i++){
        cin >> coin[i];
    }
    
    while(K!=0){
        int best_num=0;
        for(int i=0; i<N ; i++){
            if(coin[i]<=K)
                best_num = i;
        }
        result += (K/coin[best_num]);
        K = K % coin[best_num];
    }
    cout<<result;
}
