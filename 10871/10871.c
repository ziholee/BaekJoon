#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int X;
    int A;

    scanf("%d %d", &N, &X);

    for(int i = 0; i < N; i++) {
        scanf("%d", &A);
        
        if(X > A) {
            printf("%d ", A); //X보다 작은 수를 출력한다.
        }
    }
    return 0;
}