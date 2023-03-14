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
        meeting.push_back(pair<int,int>(sec, fst));
        //끝나는 시간, 시작 시간
    }
    
    sort(meeting.begin(), meeting.end()); //끝나는 시간 기준으로 정렬
    
    int result = 0;
    int cur_end=0;
    
    for(int i=0 ; i<N ; i++){
        pair<int,int> tmp = meeting[i];
        if(tmp.second >= cur_end){ //앞선 종료시간이 이번 시작시간보다 이르다면
            cur_end = tmp.first; // 종료시간 갱신
            result++;
        }
    }
    
    cout<<result;
}
