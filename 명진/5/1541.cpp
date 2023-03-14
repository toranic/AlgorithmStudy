#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() {
    string input;
    getline(cin, input);

    vector<string> x;
    stringstream ss(input);
    string segment;

    while (getline(ss, segment, '-')) {
        x.push_back(segment);
    }

    vector<int> result;
    for (string s : x) {
        stringstream ss(s);
        string subsegment;

        int sum = 0;
        while (getline(ss, subsegment, '+')) {
            sum += stoi(subsegment);
        }

        result.push_back(sum);
    }

    int final_result = result[0];
    for (int i = 1; i < result.size(); i++) {
        final_result -= result[i];
    }

    cout << final_result << endl;
    return 0;
}
