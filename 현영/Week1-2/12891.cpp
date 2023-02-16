#include <iostream>
using namespace std;

int a, c, g, t = 0;

void count(char k, int minus) {
    if (k =='A')
        a += 1*minus;
    else if (k =='C')
        c += 1*minus;
    else if (k =='G')
        g += 1*minus;
    else
        t += 1*minus;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, p;
    cin >> s >> p;

    string dna;
    cin >> dna;

    int nums[4]={0};
    for(int i=0; i < 4; i++){
        cin >> nums[i];
    }

    int start, end, cnt = 0;
    count(dna[start], 1);

    while (end < s) {
        if (end - start + 1 == p){
            if (a>=nums[0] && c>=nums[1] && g>=nums[2] && t>=nums[3])
                cnt++;
            count(dna[start], -1);
            start++;
            end++;
            count(dna[end], 1);
        }
        else {
            end++;
            count(dna[end], 1);
        }
    }
    cout << cnt;
}