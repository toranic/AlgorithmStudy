//1874

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    stack<int> A;    
    vector<char> result;
    
    int nn=1; //push할 자연수
    
    int i;
    int k;
    bool state=true;
    
    result.push_back(1);
    
    for(i=0 ; i<n ; i++){ //n회 입력받기
        cin>>k; //입력받는 수 k
        while (nn <= k) { //'push 대기중인 수 nn'이 k보다 커질 때까지 반복
					result.push_back('+');
					A.push(nn);
					nn++;
				}
			if(k == A.top()) {
				A.pop();
				result.push_back('-');
			}
			else {
				cout << "NO";
				state = false;
				return 0; //종료
			}
    }
    
    if(state){
        for(i=1;i<result.size();i++){ //질문하기!
            cout<<result[i]<<"\n";
        }
    }
    return 0;
}
