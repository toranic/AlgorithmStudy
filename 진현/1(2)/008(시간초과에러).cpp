/****** 투 포인터 *****/
/********1253********/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; // 재료의 개수 n
    int sum; // 좋은 수가 완성되는 번호의 합 m
    cin >> n;
    
    vector<int> arr(n,0); //재료 배열
    for(int i=0;i<n;i++)cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    
    int a; //front
    int b; //rear
    int good=0; //좋은 수의 개수

    for(int i=0 ; i<n ; i++){
        a=0; b=n-1;
        long find = arr[i];
        while(a<b){
            if(arr[a]+arr[b]==find){
                if(a!=i && b!=i){good++;break;}
                else if(a==i){a++;}
                else if(b==i){b++;}
            }
            else if(arr[a]+arr[b]<find){a++;}
            else{b--;}
        }
    }
    
    cout<<good;
}
