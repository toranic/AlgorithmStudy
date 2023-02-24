#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int>minutes(n, 0);

    for(int i=0; i<n; i++)
        cin >> minutes[i];

    for(int sel_idx = 1; sel_idx<n; sel_idx++){
        int move_idx = sel_idx;
        int sel_val = minutes[sel_idx];
        for(int j=0; j<sel_idx; j++){
            if(minutes[j] > minutes[sel_idx]){
                move_idx = j;
                break;
            }
        }
        for(int j=sel_idx-1; j>=move_idx; j--){
            minutes[j+1] = minutes[j];
        }
        minutes[move_idx] = sel_val;
    }

    int sum = minutes[0];
    int temp = minutes[0];
    for(int i=1; i<n; i++) {
        sum += (temp + minutes[i]);
        temp += minutes[i];
    }

    cout << sum;

}