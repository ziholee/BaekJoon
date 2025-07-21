#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);
    //5와 3중 큰 수인 5로 먼저 나눈 후 3로 나눠서 나눠 떨어질 때 갯수를 출력하고, 조건이 맞지 않을 경우 -1을 출력한다.
    for(int i = N / 5; i >= 0; i--) {
        for(int j = N / 3; j >= 0; j--) {
            if(N == 5 * i + 3 * j) {
                printf("%d", i + j);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}