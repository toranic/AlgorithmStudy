#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> nums(n,0);
    vector<int> temp;
    vector<int> answer(n, -1);

    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    temp.push_back(nums.back());
    for(int i=n-2; i>=0; i--) {
        if(nums[i] < temp.back()){
            answer[i] = temp.back();
        }
        else{
            while(nums[i] >= temp.back() && !temp.empty())
                temp.pop_back();
            if(!temp.empty())
                answer[i] = temp.back();
        }
        if (nums[i-1] < nums[i])
            temp.push_back(nums[i]);
    }

    for(int i=0; i<n; i++) {
        cout << answer[i] << " ";
    }
}
