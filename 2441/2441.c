#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int star;

    scanf("%d", &star);

    for (int i = 0; i < star; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for(int k = 0; k < star - i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
