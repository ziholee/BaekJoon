#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char A[4];
    char B[4];
    char temp; //뒤집기 위한 임시 변수.

    scanf("%s %s", A, B);
    //문자열 A를 뒤집는다.
    for(int i = 0; i < strlen(A) / 2; i++) {
        temp = A[i];
        A[i] = A[strlen(A) - 1 - i];
        A[strlen(A) - 1 - i] = temp;
    }
    //문자열 B를 뒤집는다.
    for(int i = 0; i < strlen(B) / 2; i++) {
        temp = B[i];
        B[i] = B[strlen(B) - 1 - i];
        B[strlen(B) - 1 - i] = temp;
    }
    //strcmp()를 이용하여 크기를 비교한다.
    if(strcmp(A, B) > 0) {
        printf("%s", A); //A가 클 때.
    } else {
        printf("%s", B); //B가 클 때.
    }
    return 0;
}