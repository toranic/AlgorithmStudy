#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int numbers[1000001];

void swap(int a, int b){
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}

void merge_sort(int start, int end) {
    int mid = (start+end)/2;
    merge_sort(start, mid);
    merge_sort(mid+1, end);

    for(int i=start; i<end; i++){
        if()
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> numbers[i];



    for(int i=0; i<n; i++)
        cout << numbers[i] << "\n";
}