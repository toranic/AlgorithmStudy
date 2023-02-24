#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n; //n개의 수
	int m; //m으로 나누어떨어지도록
	cin >> n;   cin >> m; //입력받기
	
    vector<int> arr(n,0);
    int result=0; //구하고자 하는 결과값
	
	cin >> arr[0]; //0 예외처리
	for(int i=1;i<n;i++){
	    cin >> arr[i];
	    arr[i]+=arr[i-1]; //구간합 입력
	}
	for(int i=0;i<n;i++){
	    arr[i]=arr[i]%m;
	    if(arr[i]==0){result++;} // 나머지가 0이면 ++
	}
	
	for(int i=0;i<m;i++){
	    int tmp=0; // 나머지가 같은 값 count
	    for(int j=0;j<n;j++){
	        if(arr[j]==i){
	            tmp++;
	        }
	    }
	    if(tmp>1){ // 같은 값이 2개 이상이면
	        result+=tmp*(tmp-1)/2; //tmpC2
	    }
	}
    cout<<result;
	return 0;
}
