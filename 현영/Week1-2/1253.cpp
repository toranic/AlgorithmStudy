#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n, 0);

    for(int i=0; i < n; i++){
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    int count = 0;
    int answer = 0;

    while (answer < n) {

        int start = 0;
        int end = n-1;
        int sum = nums[start] + nums[end];

        while (start < end) {
            if (sum == nums[answer]) {
                if (start == answer) {
                    sum -= nums[start];
                    start++;
                    sum += nums[start];
                }
                else if (end == answer) {
                    sum -= nums[end];
                    end--;
                    sum += nums[end];
                }
                else {
                    count++;
                    break;
                }
            } else if (sum < nums[answer]) {
                sum -= nums[start];
                start++;
                sum += nums[start];
            } else {
                sum -= nums[end];
                end--;
                sum += nums[end];
            }
        }

        answer++;
    }

    cout << count;

}