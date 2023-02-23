#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

//template <class T>
//void QuickSort(T* a, const int left, const int right)
//{
//	if (left < right) {
//		int i = left, j = right + 1, pivot = a[left];
//		do {
//			do i++; while (a[i] < pivot);
//			do j--; while (a[j] > pivot);
//			if (i < j) swap(a[i], a[j]);
//		} while (i < j);
//		swap(a[left], a[j]);
//		QuickSort(a, left, j - 1);
//		QuickSort(a, j + 1, right);
//	}
//}

int a[5000000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);

	cout << a[k - 1];
}
