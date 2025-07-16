#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N; //바구니 수
    int M; //넣는 횟수
    scanf("%d %d", &N, &M);

    int basket[101] = {0}; //바구니 배열 초기화한다. (최대 100개까지, 0으로 초기화)

    for (int m = 0; m < M; m++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        //i부터 j까지 반복하면서 각 바구니에 공 번호 k를 넣는다.
        for (int b = i; b <= j; b++) {
            basket[b] = k;
        }
    }
    
    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }
    return 0;
}
