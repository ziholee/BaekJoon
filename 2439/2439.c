#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int star;

    scanf("%d", &star);

    for(int i = 1; i <= star; i++) {
        for(int j = 1; j <= star - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
