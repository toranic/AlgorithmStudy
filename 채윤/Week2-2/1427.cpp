#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string N;
	cin >> N;
	sort(N.begin(), N.end(), greater<char>());	//기본은 오름차순이라 greater<char>() 사용해서 내림차순으로 변경
	cout << N;
}