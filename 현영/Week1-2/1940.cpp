#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> nums(n, 0);

    for(int i=0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int start = 0;
    int end = n-1;
    int sum = nums[start]+nums[end];
    int count = 0;

    while(start < end){

        if(sum==m){
            count++;
            start++;
            end--;
            sum=(nums[start]+nums[end]);
        }
        else if(sum < m){
            sum-=nums[start];
            start++;
            sum+=nums[start];
        }
        else{
            sum-=nums[end];
            end--;
            sum+=nums[end];
        }
    }

    cout << count;
}