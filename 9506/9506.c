#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        //n이 -1일 경우 종료된다.
        if (n == -1) {
            break;
        }
        
        int sum = 0;

        //약수의 합을 계산한다.
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        //약수의 합이 n과 같은지 확인하여 완전수 판별한다.
        if (sum == n) {
            printf("%d = ", n);
            int first = 1;
            for (int i = 1; i < n; i++) {
                if (n % i == 0) {
                    if (!first) {
                        printf(" + ");
                    }
                    printf("%d", i);
                    first = 0;
                }
            }
            printf("\n");
        } else {
            printf("%d is NOT perfect.\n", n);
        }
    }

    return 0;
}
