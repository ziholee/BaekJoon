#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int num;

    scanf("%d", &N);

    num = N;

    for(int i = N; 0 < i; i--) {
        printf("%d\n", num);
        num--;
    }
    return 0;
}