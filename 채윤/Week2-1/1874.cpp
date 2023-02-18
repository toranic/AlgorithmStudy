#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;	//수열의 개수
	vector<int> arr(n, 0);	//수열 저장 배열
	vector<char> result;	//결과 저장 배열, 몇개인지 몰라서 초기화x

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	stack<int> myStack;
	int num = 1;	//오름차순 자연수 지정
	int stop = 1;

	for (int i = 0; i < arr.size(); i++) {
		int cur = arr[i];	//현재 수열 값

		if (cur >= num)
		{
			while (cur >= num) {	//현재 수열값 >= 오름차순 자연수일 때 까지 push() 실행
				myStack.push(num++);
				result.push_back('+');	//vector의 내장함수
			}
			myStack.pop();
			result.push_back('-');
		}
		else {	//현재 수열값 < 오름차순 자연수
			int top = myStack.top();
			myStack.pop();

			if (top > cur) {
				cout << "NO";
				stop = 0;
				break;
			}
			else {
				result.push_back('-');
			}
		}
	}

	if (stop == 1) {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << '\n';
		}
	}

}