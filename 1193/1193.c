#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int X; //입력받은 정수 X
    scanf("%d", &X);

    int line = 0; //현재 몇 번째 대각선인지
    int sum = 0; //지금까지 줄에 포함된 항의 누적 개수

    for (line = 1; sum + line < X; line++) {
        sum += line;
    }

    int p = X - sum;  // 그 줄에서 몇 번째인지

    int a; //분자
    int b; //분모
    if (line % 2 == 0) {
        a = p;
        b = line - p + 1; //짝수
    } else {
        a = line - p + 1;
        b = p;            //홀수
    }

    printf("%d/%d\n", a, b);
    return 0;
}