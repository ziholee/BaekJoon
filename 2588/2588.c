#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);
    //num2의 각 자릿수를 분리하여 계산한다.
    int units_digit = num2 % 10; //num2의 일의 자리(10으로 나눈 나머지)
    int tens_digit = (num2 / 10) % 10; //num2의 십의 자리
    int hundreds_digit = num2 / 100;  //num2의 백의 자리

    int result1 = num1 * units_digit; //3 - 첫 번째 수와 두 번째 수의 일의 자리 곱
    int result2 = num1 * tens_digit; //4 - 십의 자리 곱 계산
    int result3 = num1 * hundreds_digit; //5 - 백의 자리 곱 계산
    int final_result = num1 * num2; //6 - 전체 곱 계산

    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
    printf("%d\n", final_result);
    return 0;
}