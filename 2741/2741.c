#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    int n = 0;

    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        n++;
        printf("%d\n", n);
    }
    return 0;
}