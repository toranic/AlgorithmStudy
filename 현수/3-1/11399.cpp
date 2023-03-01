#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int a,b,c;
	cin >> a;
	int* q = new int[a];
	for (int i = 0; i < a; i++)
	{
		cin >> q[i];
	}
	sort(q, q + a);
	b = q[0];
	c = q[0];
	for (int i = 1; i < a; i++)
	{
		b += q[i];
		c += b;
	}
	cout << c;
}
