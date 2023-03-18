#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    vector<int> op; //연산자
    vector<int> num; //수
    vector<char> tmp; //수 임시 저장

    for(int i=0 ; i<str.length() ; i++){
        if(str[i]>='0'&&str[i]<='9'){ //0~9 사이 숫자일 때
            tmp.push_back(str[i]);
        }
        else { //연산자일 때
            if (str[i] == '+') {
                op.push_back(1);
            } else if (str[i] == '-') {
                op.push_back(0);
            }
            //연산자가 나왔으므로 앞의 상수는 끝남. 상수를 정리해줘야 함
            int sum=0;
            for(int j=0 ; j<tmp.size() ; j++){
                sum = sum*10 + str[j]-'0';
            }
            num.push_back(sum);
        }
    } //for loop 종료

    int result=0;
    int minus_keep=0;
    for(int i=0 ; i<op.size();i++){
        if(op[i]==0){
            
        }
    }
}
