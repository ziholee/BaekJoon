#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    int N, M;
    
    //행렬의 크기 N과 M을 입력 받는다.
    scanf("%d %d", &N, &M);
    //A행렬, B행렬, A+B 행렬의 값
    int A[N][M], B[N][M], result[N][M];

    //A행렬을 입력 받는다.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    //B행렬을 입력 받는다.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    //A행렬과 B행렬을 더한다.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    //결과를 출력한다.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}