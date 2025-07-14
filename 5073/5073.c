#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        
        if (a == 0 && b == 0 && c == 0) {
            break; //0이면 종료.
        }
        //삼각형 성립 조건
        if (a + b <= c || a + c <= b || b + c <= a) {
            printf("Invalid\n"); //세 변의 길이가 삼각형의 조건을 만족하지 못하는 경우.
        } 
        else if (a == b && b == c) {
            printf("Equilateral\n"); //세 변의 길이가 모두 같은 경우.
        } 
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n"); //두 변의 길이만 같은 경우.
        } 
        else {
            printf("Scalene\n"); //세 변의 길이가 모두 다른 경우.
        }
    }
    return 0;
}
