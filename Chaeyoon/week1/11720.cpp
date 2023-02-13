#include <iostream>
using namespace std;


int main() {
	int N = 0;
	string numbers;
	cin >> N;
	cin >> numbers;

	int a, sum = 0;

	for (int i = 0; i < numbers.length(); i++) {
		a = int(numbers[i])-48;	
		sum += a;
	}
	cout << sum << "\n";
}