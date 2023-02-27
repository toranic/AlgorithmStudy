#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;
int arr[500001];
int ans[500001];
long long ans2;
void sort_qq(int s, int e)
{
	if (s >= e)
		return;
	int mid = (s+e) / 2;
	sort_qq(s, mid);
	sort_qq(mid + 1, e);
	for (int i = s; i <= e; i++)
	{
		ans[i] = arr[i];
	}
	int start = s;
	int end = mid+1;
	int index = s;
	while (start <= mid && end <= e)
	{
		if (ans[start] <= ans[end])
		{
			arr[index] = ans[start];
			index++;
			start++;

		}
		else
		{
			ans2 += (end - index);
			arr[index] = ans[end];
			index++;
			end++;
		}
	}
	while (start <= mid)
	{
		arr[index] = ans[start];
		index++;
		start++;
	}
	while (end <= e)
	{
		arr[index] = ans[end];
		index++;
		end++;
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	ans2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort_qq(0, n-1);
	cout<<ans2;
	return 0;
}
