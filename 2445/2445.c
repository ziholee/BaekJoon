#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int star;
    scanf("%d", &star);

    //위쪽 절반 출력한다.
    for(int i = 1; i <= star; i++) {
        //왼쪽 별.
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        //가운데 공백 (2*(n-i)칸).
        for(int j = 1; j <= 2 * (star - i); j++) {
            printf(" ");
        }
        //오른쪽 별
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    //아래쪽 절반 출력한다.
    for(int i = star - 1; i >= 1; i--) {
        //왼쪽 별.
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        //가운데 공백.
        for(int j = 1; j <= 2 * (star - i); j++) {
            printf(" ");
        }
        //오른쪽 별.
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
