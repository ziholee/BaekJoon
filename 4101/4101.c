#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    int b;

    while(1) {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) {
            break;
        }
        else {
            if(a > b) {
                printf("Yes\n");
            }
            if(a < b || a == b) {
                printf("No\n");
            }
        }
    }
    return 0;
}