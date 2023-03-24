#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
	if (a % b == 0)
		return b;
	return gcd(b, a % b);
}

int main(void)
{
	ll a, b;
	cin >> a >> b;
	ll result = gcd(a, b);
	while (result--)
	{
		cout << '1';
	}
}
