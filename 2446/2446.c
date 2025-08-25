#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int star;
    scanf("%d", &star);
    //윗부분
    for(int i = 0; i < star; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2 * (star - i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    //아랫부분
    for(int i = 1; i < star; i++) {
        for(int j = 0; j < star - i - 1; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}