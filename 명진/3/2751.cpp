#include <iostream>
#include <vector>
#include <algorithm>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

// 병합 정렬 함수
void mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) return; // 종료 조건

    int mid = (start + end) / 2;
    mergeSort(arr, start, mid); // 왼쪽 반 정렬
    mergeSort(arr, mid + 1, end); // 오른쪽 반 정렬

    // 두 반을 병합하여 정렬
    vector<int> temp(end - start + 1);
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= end) temp[k++] = arr[j++];
    for (int idx = 0; idx < k; idx++) {
        arr[start + idx] = temp[idx];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1); // 병합 정렬

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}
