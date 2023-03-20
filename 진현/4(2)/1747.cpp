#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long N;
    cin>>N;

    vector <long> arr(1003002);

    for(int i=0;i<1003002;i++){
        arr[i]=i;
    }
    arr[1]=0;


    for(int i=2;i<=sqrt(1003002);i++){
        if(arr[i]!=0) {
            for (int j = i + i ; j < 1003002 ; j += i) {
                arr[j]=0;
            }
        }
    }

    vector <long> number;

    for(int i=N;i<1003002;i++){
        if(arr[i]!=0){
            number = vector <long>(0);
            int tmp=arr[i];

            while(tmp!=0){
                number.push_back(tmp%10);
                tmp = tmp/10;
            }

            int j=0;
            int k=number.size()-1;
            bool palindrome = true;

            while(j<k){
                if(number[k]==number[j]){
                    j++;k--;
                }
                else{
                    palindrome = false;
                    break;
                }
            }

            if(palindrome==true){
                cout<<arr[i];
                break;
            }

        }
    }
    return 0;
}
