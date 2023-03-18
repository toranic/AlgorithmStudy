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
int arr[10000000];

bool check(int n)
{
	int size = 0;
	int temp[7];
	while (n != 0)
	{
		temp[size] = n % 10;
		n /= 10;
		size++;
	}
	for (int i = 0; i <= size; i++)
	{
		if (temp[i] != temp[--size])
		{
			return false;
		}
	}
	return true;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int max = 10000000;
	int N;
	cin >> N;
	for (int i = 2; i < 10000000; i++)
	{
		if (arr[i] == 0)
		{
			if (N <= i&&check(i))
			{
				cout << i;
				break;
			}
			for (ll j = i; j <= 10000000; j += i)
				arr[j] = 1;
		}
	}
	return 0;
}