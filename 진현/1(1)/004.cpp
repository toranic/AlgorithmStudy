#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n; //2차원 배열의 크기
	int m; //구간 합 질의의 수
	cin >> n;   cin >> m; //입력받기
	
	//int str[1024][1024]={0}; //배열, 0으로 초기화
	//int sum[1024][1024]={0}; //구간합
	vector<vector<int>> str(n+1, vector<int>(n+1, 0));
	vector<vector<int>> sum(n+1, vector<int>(n+1, 0));
	
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=n;j++){
	        cin >> str[i][j]; 
	        sum[i][j]=sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1]+str[i][j];
	    }
	}

    int result[100000]; // 질의 답
    int x1, x2, y1, y2; 
    
    for(int i=0;i<m;i++){
	    cin >> x1 >> y1 >> x2 >> y2 ;
	    result[i] = sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1];
	}
	for(int i=0;i<m;i++){
	    cout << result[i] <<"\n";
	}
	
	return 0;
}
