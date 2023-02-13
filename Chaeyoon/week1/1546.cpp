#include <iostream>
using namespace std;

int main() {

	int N;
	int score[1000];
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}

	double sum = 0.0;
	int max = 0;

	for (int i = 0; i < N; i++) {
		if (score[i] >= max) {
			max = score[i];
		}
		sum += score[i];
	}
	
	double avg = ((sum * 100)/max) / N;
	cout << avg;

}
