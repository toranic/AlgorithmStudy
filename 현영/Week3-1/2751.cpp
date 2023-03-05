#include <iostream>
#include <algorithm>
using namespace std;

int numbers[1000001];
int result[1000001];

void merge(int s, int m, int e)
{
    int i, j, k;

    // 왼쪽 리스트의 시작점
    i = s;
    // 오른쪽 리스트의 시작점
    j = m + 1;
    // 채워넣을 시작점
    k = s;

    while (i <= m && j <= e)
    {
        // 양쪽 리스트의 최솟값끼리 비교, 더 작은 값을 결과배열에 넣기, 결과배열에 넣은 값을 가리키는 인덱스만 ++
        if (numbers[i] <= numbers[j])
            result[k++] = numbers[i++];
        else
            result[k++] = numbers[j++];
    }


    // 1 2 3 4 5     6 7 8 9 10

    // 왼쪽 리스트의 값들이 결과배열에 다 들어간 경우 남은 오른쪽 리스트의 값들 다 넣기
    // 왼쪽 리스트의 시작점이 오른쪽으로 넘어간 경우
    if (i > m)
        while (j <= e)
            result[k++] = numbers[j++];

    // 오른쪽 리스트의 값들이 결과배열에 다 들어간 경우 남은 왼쪽 리스트의 값들 다 넣기
    else
        while (i <= m)
            result[k++] = numbers[i++];

    // 정렬된 값 옮겨담기
    for (int i = s; i <= e; i++)
        numbers[i] = result[i];

}

void merge_sort(int start, int end) {

    if(start < end){
        int mid = (start+end)/2;
        merge_sort(start, mid);
        merge_sort(mid+1, end);
        merge(start, mid, end);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> numbers[i];

    merge_sort(0, n-1);

    for(int i=0; i<n; i++)
        cout << numbers[i] << "\n";
}