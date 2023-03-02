#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int>numbers;

int find_idx(int start, int end);
void quick_sort(int start, int end, int answer_idx);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    int temp;
    for(int i=0; i<n; i++) {
        cin >> temp;
        numbers.push_back(temp);
    }

    quick_sort(0, n-1, k-1);

    cout << numbers[k-1];
}

void swap(int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

int find_idx(int start, int end){
    int mid = (start+end)/2;
    swap(start, mid);
    int pivot = numbers[start];

    int left = start + 1;
    int right = end;

    while(left<=right) {
        if (pivot >= numbers[left])
            left++;
        else if (pivot < numbers[right])
            right--;
        else {
            swap(left, right);
            left++;
            right--;
        }
    }
    swap(start, right);
    return right;
}

void quick_sort(int start, int end, int answer_idx) {
    int new_pivot = find_idx(start, end);
    if(new_pivot == answer_idx)
        return;
    else if(new_pivot < answer_idx)
        quick_sort(new_pivot+1, end, answer_idx);
    else
        quick_sort(start, new_pivot-1, answer_idx);
}