#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    char n[101];
    int total = 0;

    scanf("%d", &N);
    scanf("%s", n);

    for(int i = 0; i < N; i++) {
        total += n[i] - '0';
    }

    printf("%d", total);
    return 0;
}