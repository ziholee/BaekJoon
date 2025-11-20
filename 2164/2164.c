#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int queue[1000000];
    int head = 0;
    int tail = 0;

    for(int i = 1; i <= N; i++) {
        queue[tail++] = i;
    }
    while(tail - head > 1) {
        head++;
        queue[tail++] = queue[head++];
    }

    printf("%d\n", queue[head]);
    return 0;
}
