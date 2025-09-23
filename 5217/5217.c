#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t_case;
    scanf("%d", &t_case);

    for(int i = 0; i < t_case; i++) {
        int num;
        scanf("%d", &num);

        printf("Pairs for %d:", num);

        int count = 0;
        for(int j = 1; j < num/2 + 1; j++) {
            if(j == num - j || num - j == 0) {
                continue;
            }
            if(count++) {
                printf(",");
            }
            printf(" %d %d", j, num-j);
        }
        printf("\n");
    }
    return 0;
}