#include <iostream>
using namespace std;
//N-Queen 문제는 크기가 N × N인 체스판 위에 퀸 N개를 서로 공격할 수 없게 놓는 문제이다.
//N이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 작성하시오.

int n;
int * board;
int count=0;

int promising(int x, int y);
void nqueen(int i);

int main(){
    cin >> n;
    int bd[n+1]={0};
    board = bd;

    nqueen(1);
    cout<<count;
}

//유망한지 판단
int promising(int x, int y){
    for(int i=1 ; i<x ; i++){
        int a = board[i];
        if(y==a)return 0; //같은 줄
        else if(i-x == a-y)return 0; //같은 대각선
    }
    return 1;
}

//알고리즘 수행
void nqueen(int i){
    int j;

    if(i==n+1){ //다 봤으면
        count++;
        return;
    }
    else{
        for(j=1;j<=n;j++){
            board[i] = j;
            if(promising(i, j)){ //그 자리에 둬도 되면
                nqueen(i+1); //다음줄 재귀
            }
        }
    }
}
