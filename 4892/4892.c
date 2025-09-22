#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t_case;
    int count = 1;

    while(1) {
        if(scanf("%d", &t_case) != 1) break; //EOF처리

        if(t_case == 0) {
            return 0;
        }

        int n1, n2, n3, n4;
        printf("%d. ", count);

        if(t_case > 0 && t_case < 1000000) {
            n1 = t_case * 3;
            if(n1 % 2 == 0) {
                printf("even ");
                n2 = n1 / 2;
            }
            else {
                printf("odd ");
                n2 = (n1 + 1) / 2;
            }
            n3 = 3 * n2;
            n4 = n3 / 9;
            printf("%d\n", n4);
        }
        count++;
    }
    return 0;
}