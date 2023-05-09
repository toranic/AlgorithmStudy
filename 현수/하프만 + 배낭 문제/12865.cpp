#include <iostream>
#include <queue>
using namespace std;
int arr[100001];
queue<pair<int, int>> qq;
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
		int ww = qq.front().second;
		int pr = qq.front().first;
		for (int j = ww; j <= k; j++)
		{
			if (arr[j - ww] + pr > arr[j])
			{
				arr[j] = arr[j - ww] + pr;
			}
		}
	}
	cout << arr[k];
}