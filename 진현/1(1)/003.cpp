#include <iostream>
using namespace std;

int main(void) {
	int n; //수의 개수
	int m; // 합을 구해야 하는 횟수
	int arr[100000]={0}; // 구간합 배열
	int sum[100000];
	
	cin >> n;
	cin >> m;
	
	//for문 전 예외처리 1회
	cin >> arr[0];
	//배열 숫자 입력받기
	for(int i=1 ; i<n ; i++){
	    cin >> arr[i]; 
	    arr[i]+=arr[i-1];
	}
	
	int a, b; // 구간을 입력받을 변수
	for(int i=0; i<m ; i++){
	    cin >> a >> b;
	    sum[i] = arr[b-1]-arr[a-2];
	}
	
	for(int i=0; i<m ; i++){ //출력하기
	    cout << sum[i] << "\n";
	}
	return 0;
}
