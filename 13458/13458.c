#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int* A = (int*)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int B, C;
    scanf("%d %d", &B, &C);

    long long total_supervisors = 0;

    for(int i = 0; i < N; i++) {
        total_supervisors++;
        A[i] -= B;

        if(A[i] > 0) {
            total_supervisors += A[i] / C;
            if (A[i] % C != 0) {
                total_supervisors++;
            }
        }
    }
    printf("%lld\n", total_supervisors);
    free(A);
    return 0;
}
