#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int star;

    scanf("%d", &star);

    for(int i = star; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
