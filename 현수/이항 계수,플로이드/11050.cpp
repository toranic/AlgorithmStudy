#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n1, n2,sum=1;
	cin >> n1 >> n2;
	for (int i = 1; i <= n2; i++)
	{
		sum *= n1;
		sum /= i;
		n1--;
	}
	cout << sum;
	return 0;
}
