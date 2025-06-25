#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char S[1000];
    int i;

    scanf("%s", S);
    scanf("%d", &i);

    printf("%c", s[i - 1]); //0부터 시작하기 때문에 -1을 추가한다.

    return 0;
}