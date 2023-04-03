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
ll arr[100][100];
ll arr2[100][100];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N1, N2, M1, M2;
	cin >> N1 >> M1;
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < M1; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> N2 >> M2;
	for (int i = 0; i < N2; i++)
	{
		for (int j = 0; j < M2; j++)
		{
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < N1; i++)
	{
		for (int j = 0; j < M2; j++)
		{
			ll temp = 0;
			for (int k = 0; k < M1; k++)
			{
				temp += arr[i][k] * arr2[k][j];
			}
			cout << temp << ' ';
		}
		cout << '\n';
	}
	return 0;
}