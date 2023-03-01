#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;
typedef long long ll;
int arr[5000000];
void qsort(int s, int e)
{
	if (s >= e)
		return;
	int pivot = s;
	int start = s + 1;
	int end = e;
	while (start <= end)
	{
		while (start <= e && arr[pivot] >= arr[start])
		{
			start++;
		}
		while (end > s && arr[pivot] <= arr[end])
		{
			end--;
		}
		if (start < end)
		{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}
		else
		{
			int temp = arr[end];
			arr[end] = arr[pivot];
			arr[pivot] = temp;
		}
	}
	qsort( s, end-1);
	qsort( end + 1, e);
}

int main(void)
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	int N, k;
	cin >> N >> k;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	qsort(0, N-1);
	cout << arr[k - 1];
	return 0;
}