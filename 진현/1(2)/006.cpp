/****** 투 포인터 *****/
/********2018********/

#include <iostream>
using namespace std;

int main() {
    int n; // 입력된 자연수 n
    cin >> n;
    
    int sum = 1; //합이 n이 되는 sum을 찾는다.
    int count = 1; //합이 n이 되는 sum의 개수
    
    int start = 1;
    int end = 1;
    
    while(start<n){
        sum = (end*(end+1)-start*(start-1))/2;
        if(sum == n){count++; ++start; end=start;}
        else if(sum < n){end++;}
        else{start++;end=start;}//sum > n
    }
    
    cout << count;
    
    return 0;
}
