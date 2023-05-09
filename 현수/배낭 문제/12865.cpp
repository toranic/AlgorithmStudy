#include <vector>
#include <iostream>
#include <queue>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <stack>
#include <memory.h>
using namespace std;
typedef long long ll;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> qq;
int arr[1000001];
int main(void)
{
	int N;
	int k;
	cin >> N >> k;
	for (int i = 0; i <= k; i++)
	{
		arr[i] = 0;
	}
	for (int i = 0; i < N; i++)
	{
		int temp;
		int temp2;
		cin >> temp >> temp2;
		qq.push({ temp,temp2 });
	}
	for (int i = 0; i < N; i++)
	{
		int ww = qq.top().first;
		int pr = qq.top().second;
		qq.pop();
		for (int j = k; j >= ww; j--)
		{
			arr[j] = max(arr[j], arr[j - ww] + pr);
		}
	}
	cout << arr[k];
}