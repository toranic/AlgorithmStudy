#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> lectures;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int sum = 0;
    int max = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        lectures.push_back(k);
        if(k > max)
            max = k;
        sum += k;
    }

    int left = max;
    int right = sum;
    int mid;
    while(true){
        mid = (left + right) / 2;

        int count = 1;
        int temp = 0;
        for(int lecture: lectures){
            if(temp + lecture > mid) {
                count++;
                temp = 0;
            }
            temp += lecture;
        }

        if (left >= right) {
            break;
        }
        else if (count <= m)
            right = mid;
        else
            left = mid + 1;
    }

    cout << mid;
}