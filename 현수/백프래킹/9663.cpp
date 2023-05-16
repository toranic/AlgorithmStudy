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
int mapp[16][16] = { 0, };
int N;
int ans = 0;
int check(int y, int x)
{
	int ckck = 1;
	for (int i = 1; i <= N; i++)
	{
		if (mapp[i][x] == 1)
		{
			ckck = 0;
			return ckck;
		}
	}
	int tempx = x;
	int tempy = y;
	while (tempx > 0 && tempy > 0 && tempx <= N && tempy <= N)
	{
		tempx--;
		tempy--;
		if (mapp[tempy][tempx] == 1)
		{
			ckck = 0;
			return ckck;
		}
	}
	tempx = x;
	tempy = y;
	while (tempx > 0 && tempy > 0 && tempx <= N && tempy <= N)
	{

		tempx--;
		tempy++;
		if (mapp[tempy][tempx] == 1)
		{
			ckck = 0;
			return ckck;
		}
	}
	tempx = x;
	tempy = y;
	while (tempx > 0 && tempy > 0 && tempx <= N && tempy <= N)
	{

		tempx++;
		tempy++;
		if (mapp[tempy][tempx] == 1)
		{
			ckck = 0;
			return ckck;
		}
	}
	tempx = x;
	tempy = y;
	while (tempx > 0 && tempy > 0 && tempx <= N && tempy <= N)
	{

		tempx++;
		tempy--;
		if (mapp[tempy][tempx] == 1)
		{
			ckck = 0;
			return ckck;
		}
	}
	return ckck;
}

void rere(int y)
{
	for (int i = 1; i <= N; i++)
	{
		if (check(y, i))
		{
			if (y == N)
			{
				ans++;
			}
			else
			{
				mapp[y][i] = 1;
				rere(y + 1);
				mapp[y][i] = 0;
			}
		}
	}
}

int main(void)
{
	cin >> N;
	rere(1);
	cout << ans;
}