#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main(){
    
    string s;
    cin >> s;
    vector<int> A(s.size(), 0);
    
    for(int i = 0; i < s.size(); i++){
        A[i] = stoi(s.substr(i, 1));
    }
    
    sort(A.begin(), A.end(), greater<>());
    
    for (int i = 0; i< s.size(); i++)
        cout << A[i];
    
}
