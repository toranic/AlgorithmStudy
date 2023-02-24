#include <iostream>
using namespace std;

int check = 0;	//충족한 변수의 개수
int password[4];	//비밀번호 조건 배열
int current[4];	//업데이트 할 현재 상태 배열
void add(char c);
void remove(char c);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S, P;
	cin >> S >> P;
	string DNA;
	cin >> DNA;

	for (int i = 0; i < 4; i++) {
		cin >> password[i];
		if (password[i] == 0) {	//확인할 필요 없으므로 충족
			check++;
		}
	}
	
	int cnt = 0;

	for (int i = 0; i < P; i++) {	//0~P-1
		add(DNA[i]);
	}	
	
	if (check == 4) {
		cnt++;
	}

	for (int i = P; i < S; i++) {
		int j = i - P;
		add(DNA[i]);
		remove(DNA[j]);

		if (check == 4) {
			cnt++;
		}
	}

	cout << cnt << endl;
}

void add(char c)
{
	switch (c) {
	case 'A':
		current[0]++;
		if (current[0] == password[0])
			check++;
		break;
	case 'C':
		current[1]++;
		if (current[1] == password[1])
			check++;
		break;
	case 'G':
		current[2]++;
		if (current[2] == password[2])
			check++;
		break;
	case 'T':
		current[3]++;
		if (current[3] == password[3])
			check++;
		break;
	}
}

void remove(char c)	//delete로 이름 지으면 망..
{
	switch (c) {
	case 'A':
		if (current[0] == password[0])
			check--;
		current[0]--;
		break;
	case 'C':
		if (current[1] == password[1])
			check--;
		current[1]--;
		break;
	case 'G':
		if (current[2] == password[2])
			check--;
		current[2]--;
		break;
	case 'T':
		if (current[3] == password[3])
			check--;
		current[3]--;
		break;
	}
}