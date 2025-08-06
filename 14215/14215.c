#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int max;
    int max2;
    int sum;

    scanf("%d %d %d", &a, &b, &c);

    max = a;
    sum = a + b + c;

    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }

    // 나머지 두 변의 합
    int other_sum = sum - max;

    //삼각형 조건을 만족하지 않으면 조정
    if (max >= other_sum) {
        max = other_sum - 1;
    }

    // 새로운 둘레 = max + 나머지 둘의 합
    printf("%d", max + other_sum);
    return 0;
}