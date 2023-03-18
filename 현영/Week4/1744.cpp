#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

int n;
vector<int> plus_nums;
vector<int> minus_nums;
vector<int> zeros;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp == 0)
            zeros.push_back(temp);
        else if(temp > 0)
            plus_nums.push_back(temp);
        else
            minus_nums.push_back(temp);
    }

    sort(plus_nums.begin(), plus_nums.end());
    sort(minus_nums.begin(), minus_nums.end(), greater<>());

    int cnt = 0;

    // plus
    vector<int> temp_mul;
    while(!plus_nums.empty()){
        if(plus_nums.back()==1)
            cnt += 1;
        else
            temp_mul.push_back(plus_nums.back());
        plus_nums.pop_back();

        if(temp_mul.size() == 2) {
            cnt += (temp_mul.front() * temp_mul.back());
            temp_mul.pop_back();
            temp_mul.pop_back();
        }
    }

    if(!temp_mul.empty()) {
        cnt += temp_mul.front();
        temp_mul.pop_back();
    }

    // minus
    while(!minus_nums.empty()){
        temp_mul.push_back(minus_nums.back());
        minus_nums.pop_back();

        if(temp_mul.size() == 2) {
            cnt += (temp_mul.front() * temp_mul.back());
            temp_mul.pop_back();
            temp_mul.pop_back();
        }
    }

    if(!temp_mul.empty()) {
        if(zeros.empty())
            cnt += temp_mul.front();
    }


    cout << cnt;

}