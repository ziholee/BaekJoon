#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int arr[10000];

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    //뒤에서부터 더이상 오름차순이 성립되지 않는 지점을 찾는다. (arr[i - 1] < arr[i]인 곳)
    int i = N - 1;
    while(i > 0 && arr[i - 1] >= arr[i]) {
        i--;
    }

    //만약 i가 0이면 다음 순열이 없으므로 -1을 출력한다.
    if(i == 0) {
        printf("-1");
        return 0;
    }

    //뒤에서부터 arr[i - 1]보다 큰 숫자를 찾는다.
    int j = N - 1;
    while(arr[j] <= arr[i - 1]) {
        j--;
    }

    //arr[i - 1]와 arr[j]를 swap한다.
    int temp = arr[i  - 1];
    arr[i - 1] = arr[j];
    arr[j] = temp;

    //i부터 끝까지 뒤집는다.
    int l = i; //왼쪽
    int r = N - 1; //오른쪽
    while(l < r) {
        int t = arr[l];
        arr[l] = arr[r];
        arr[r] = t;
        l++;
        r--;
    }

    for(int k = 0; k < N; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}