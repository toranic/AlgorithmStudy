/*수 N개가 주어졌을 때 i번째 수에서 j번째 수까지의 합을 구하는 프로그램을 작성하시오.
 합 배열 공식 : S[i] = S[i-1] + A[i]

 구간 합 공식 : S[j] - S[i-1]
 */

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arrNum, quizNum;
	int arr[100000];
	
	cin >> arrNum >> quizNum;

	for (int i = 1; i <= arrNum; i++) {	//배열의 인덱스는 1로 시작하는게 편하다
		int currNum;
		cin >> currNum;
		arr[i] = arr[i - 1] + currNum;
	}

	for (int i = 0; i < quizNum; i++) {
		int j, k;
		cin >> j >> k;
		cout << arr[k] - arr[j - 1] << "\n";
	}

}