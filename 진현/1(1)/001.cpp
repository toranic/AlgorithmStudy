#include <iostream>
using namespace std;


int main(void) {
	int n;
	cin >> n;

	string numbers;
	cin >> numbers;

	int sum = 0;
	for (int i = 0; i < numbers.length(); i++)
	{
		sum += numbers[i]-'0';
	}

	cout << sum;

	return 0;
}
