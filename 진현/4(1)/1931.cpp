#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 
    
    int N;
    cin>>N;
    
    vector<pair<int,int>> meeting;
    
    int fst, sec;
    for(int i=0 ; i<N ; i++){
        cin>>fst>>sec;
        meeting.push(pair<int,int>(sec, fst));
        //끝나는 시간, 시작 시간
    }
    
    sort(meeting.begin(), meeting.end()); //끝나는 시간 기준으로 정렬
    
    int result = 0;
    
    for(int i=0 ; i<N ; i++){
        
    }
    
    cout<<result;
}
