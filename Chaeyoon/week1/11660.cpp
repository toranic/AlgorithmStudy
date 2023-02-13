#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arrNum, quizNum;
	cin >> arrNum >> quizNum;
	vector<vector<int>> arr(arrNum + 1, vector<int>(arrNum+1, 0));
	vector<vector<int>> arrSum(arrNum + 1, vector<int>(arrNum + 1, 0));
	//각 원소들은 arrNum+1개로 이루어져 있고, 이 원소 모두 0으로 초기화 되어 있다.

	for (int i = 1; i <= arrNum; i++) {
		for (int j = 1; j <= arrNum; j++) {
			cin >> arr[i][j];
			arrSum[i][j] = arrSum[i][j - 1] + arrSum[i - 1][j] - arrSum[i - 1][j - 1] + arr[i][j];
		}
	}

	for (int i = 0; i < quizNum; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int ans;
		ans = arrSum[c][d] - arrSum[a - 1][d] - arrSum[c][b - 1] + arrSum[a - 1][b - 1];
		cout << ans << "\n";
	}

}