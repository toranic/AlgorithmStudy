#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string numbers;
    vector<int>sort_numbers;
    cin >> numbers;

    for(int i=0; i<numbers.length(); i++)
        sort_numbers.push_back(numbers[i]-'0');

    for(int j=0; j<numbers.length(); j++){
        int max_idx = j;
        for(int k=j+1; k<numbers.length(); k++){
            if(sort_numbers[max_idx]<sort_numbers[k]){
                max_idx = k;
            }
        }
        if(sort_numbers[j]<sort_numbers[max_idx]){
            int temp = sort_numbers[j];
            sort_numbers[j] = sort_numbers[max_idx];
            sort_numbers[max_idx] = temp;
        }
    }

    for(int i=0; i<numbers.length(); i++)
        cout << sort_numbers[i];
}