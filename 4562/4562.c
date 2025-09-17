#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        int a,b;
        scanf("%d %d", &a, &b);

        if(a < b) {
            printf("NO BRAINS\n");
        }
        else if(a == b || a > b) {
            printf("MMM BRAINS\n");
        }
    }
    
    return 0;
}
