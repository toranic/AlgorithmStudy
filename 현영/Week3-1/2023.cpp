#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>pick;

int find_num(int n) {

    int num = 0;
    for(int item: pick) {
        num = num * 10 + item;
    }
    num = num * 10 + n;

    if(num == 1)
        return 0;

    for(int i=2; i<int(num/2)+1; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}

void dfs(int n) {
    if(pick.size() == n) {
        for(int i=0; i<pick.size(); i++)
            cout << pick[i];
        cout << "\n";
        return;
    }

    for (int i=1; i<10; i++){
        if(find_num(i)){
        pick.push_back(i);
        dfs(n);

        pick.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    dfs(n);

}