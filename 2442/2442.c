#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int star;

    scanf("%d", &star);

    for(int i = 0; i < star; i++) {
        for(int j = 0; j < star - 1 - i; j++) {
            printf(" ");
        }
        //첫째 줄에 1개 둘째 줄부터 2개씩 증가한다.
        for(int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}