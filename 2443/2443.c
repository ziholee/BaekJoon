#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }

        for(int j = 0; j < (2 * N - 1) - (2 * i); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}