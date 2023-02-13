#include <iostream>
using namespace std;

int main(void) {
	int n; // 시험을 본 과목의 개수
	int max=0; // 점수 최댓값
	int arr[1000];

    cin >> n;
    
    for(int i=0 ; i<n; i++){
        cin >> arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    float avg=0;
    
    for(int i=0 ; i<n; i++){
        avg += float(arr[i])/float(max)*100.;
    }
    
    avg = avg/n;
    cout<<avg;
    
	return 0;
}
