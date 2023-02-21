#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string numbers;
    vector<int>sort_numbers;
    cin >> numbers;

    for(int i=0; i<numbers.length(); i++)
        sort_numbers.push_back(numbers[i]-'0');

    sort( sort_numbers.begin(), sort_numbers.end(), greater<>());

    for(int i=0; i<numbers.length(); i++)
        cout << sort_numbers[i];
}