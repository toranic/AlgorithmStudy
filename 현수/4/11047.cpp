#include <iostream>
using namespace std;

int main(void)
{
	int q, w,ans=0;
	cin >> q >> w;
	int* e = new int[q];
	for (int i = 0; i < q; i++)
	{
		cin >> e[i];
	}
	for (int i = q - 1; i >= 0; i--)
	{
		while (e[i] <= w)
		{
			ans++;
			w -= e[i];
		}
	}
	cout << ans;
}
