#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin >> n;
    
    stack<int> A; //0 초기화
    int top=-1;
    
    vector<char> result;
    
    int nn=1; //push할 자연수
    
    int i;
    int k;
    bool state=true;
    
    result.push_back(1);
    
    for(i=0 ; i<n ; i++){
        cin>>k;
        while (nn <= k) {
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
			return 0;
		}
    }
    
    if(state){
        for(i=1;i<result.size();i++){
            cout<<result[i]<<"\n"; //질문하기 왜 1부터여야하는지?
        }
    }
    return 0;
}
