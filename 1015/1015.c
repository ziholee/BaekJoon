#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    int B[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        B[i] = 0; //B[i]를 0으로 초기화한다.
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) { 
            if (A[i] > A[j]) { //A[i]가 A[j]보다 크면 B[i]를 1 증가한다.
                B[i]++; //B[i]를 1 증가시킨다.
            } else if (A[i] == A[j] && i > j) { //같은 값일 경우 처리를 하지 않아 오류 발생
                B[i]++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}