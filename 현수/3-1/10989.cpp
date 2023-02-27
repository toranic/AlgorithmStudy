#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[10000] = { 0 }, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a[temp - 1]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		while (a[i] != 0)
		{
			a[i]--;
			cout << i + 1 << '\n';
		}
	}
}