#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int T; //테스트 케이스 크기
    char s[1000] = "\0"; //문자열의 길이는 1000
    char first, last;
    int str_lenght;

    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%s", s);
        str_lenght = strlen(s);
        first = s[0];
        last = s[str_lenght - 1];

        printf("%c%c\n", first, last);
    }
    return 0;
}