#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin>>N;

    vector <int> arr(1000000);

    for(int i=0;i<1000000;i++){
        arr[i]=i;
    }
    arr[1]=0;

    for(int i=2;i<=1000;i++){
        if(arr[i]!=0) {
            for (int j = i + i ; j < 1000000 ; j += i) {
                arr[j]=0;
            }
        }
    }

    vector <char> number;

    for(int i=N;i<=1000000;i++){
        if(arr[i]!=0){
            number = vector <char>(0);
            int tmp=arr[i];

            while(tmp!=0){
                number.push_back(tmp%10+'0');
                tmp/10;
            }

            int j=0;
            int k=number.size()-1;
            bool palindrome = true;

            while(j<k){
                if(number[k]==number[j]){
                    j++;k--;
                }
                else{
                    break;
                    palindrome = false;
                }
            }

            if(palindrome==true){
                cout<<arr[i];
                return 0;
            }

        }
    }
    return 0;
}
