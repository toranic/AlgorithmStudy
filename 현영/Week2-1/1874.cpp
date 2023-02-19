#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int answer[n];
    vector<int> stack;
    vector<char> result;

    for(int i=0; i<n; i++){
        cin >> answer[i];
    }

    int num = 1;
    int i = 0;
    while(num <= n || !stack.empty()) {
        if(num<=answer[i]) {
            stack.push_back(num);
            num++;
            result.push_back('+');
        }
        else if(stack.back()==answer[i]){
            stack.pop_back();
            result.push_back('-');
            i++;
        }
        else{
            cout << "NO";
            return 0;
        }
    }

    for(int i=0; i<result.size(); i++){
        cout << result[i] << "\n";
    }
}