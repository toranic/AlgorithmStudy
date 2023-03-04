#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void quickSort(int i, int j);
int a[5000000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
    quickSort(0,n-1);

	cout << a[k - 1];
}

void quickSort(int i, int j)
{
    if (i >= j) return;

    int pivot = a[(i + j) / 2];
    int left = i;
    int right = j;

    while (left <= right) {
        while (a[left] < pivot) left++;
        while (a[right] > pivot) right--;
        if (left <= right) {
            swap(a[left], a[right]);
            left++; right--;
        }
    }
    quickSort(i, right);
    quickSort(left, j);
}
