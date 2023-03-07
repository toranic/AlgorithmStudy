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
	for (int i = 0; i < N; i++) {
		int point = i;
		int value = time[i];
		for(int j=i-1; j>=0 ; j--){
			if(time[j]<time[i]){
				point = j+1;
				break;
			}
			if(j==0){
				point = 0;
			}
	}
	for(int j=i ; j>point ; j--){
		time[j]=time[j-1];
	}
	time[point]=value;

	//시간의 합 구하기
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++)
			sum += time[j];
	}

	//결과 출력 
	cout << sum << endl;
}
