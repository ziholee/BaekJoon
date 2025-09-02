#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;

    scanf("%x", &a); //입력을 16진수(%x)로 받아서 10진수 정수형으로 저장한다.

    printf("%d", a);
    return 0;
}