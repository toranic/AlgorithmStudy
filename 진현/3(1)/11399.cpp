#include<iostream>
using namespace std;

//ATM
int main(void) {
	int N, sum = 0;
	cin >> N;

	int *time = new int[N]; // new[]연산자 사용한 동적 배열할당
	for (int i = 0; i < N; i++)
		cin >> time[i];

	//삽입정렬 - 오름차순 정렬일 때 시간의 합이 가장 짧다
	int temp;
	for (int i = 0; i < N - 1; i++) {
		int j = i;
		while (time[j] > time[j + 1]) {
			temp = time[j];
			time[j] = time[j + 1];
			time[j + 1] = temp;
			j--;
		}
	}

	//시간의 합 구하기
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++)
			sum += time[j];
	}

	//결과 출력 
	cout << sum << endl;
}
