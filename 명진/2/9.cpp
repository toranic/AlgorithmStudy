//
//  main.cpp
//  Cpp_practice
//
//  Created by 이명진 on 2023/02/13.
//  Created by 이명진 on 2023/02/13.
// 아니 이거 맵 접근하는거 왜캐 복잡해 보이지.. 파이썬하다가 이거하니까 토나오겠네..
//
//
//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//int main(){
//
//    vector<int>ACGT(4, 0);
//    map<string, int> DNAmap;
//    DNAmap.insert(make_pair("A", 0)); // make_pair 을 활용하여 자료 추가
//    DNAmap.insert(make_pair("C", 1));
//    DNAmap.insert(make_pair("G", 2));
//    DNAmap.insert(make_pair("T", 3));
//    int S, P;
//    int a, c, g, t;
//    string DNA;
//    cin >> S >> P;
//    cin >> DNA;
//    cin >> a >> c >> g >> t;
//
//    int result = 0;
//    int start_index, end_index;
//
//    start_index = 0;
//    end_index = P - 1;
//
//    vector<int>checkList(4, 0);
//
//    cout << DNAmap.find("C")->first << '\n';
//

//
//}


#include<iostream>
#include<string>
#include <unordered_map>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int n, k;
string dna;
int a, c, g, t;
int ans = 0;
int acgt[200];

int main() {
    FastIO;
    cin >> n >> k;
    dna.reserve(n);
    cin >> dna >> a >> c >> g >> t;

    for (int j = 0; j < k-1; ++j) {
        acgt[dna[j]]++;
    }

    for (int i = k-1; i < n; ++i) {
        acgt[dna[i]]++;
        if (acgt['A'] >= a && acgt['C']  >= c && acgt['G']  >= g && acgt['T']  >= t) ans++;
        acgt[dna[i-k+1]]--;
    }
    cout << ans << '\n';

    return 0;
}
