#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char s[1000001]; //문자열의 길이는 1,000,000 (공백 포함).
    char ch;
    int i = 0;
    int count = 0;

    //문자 하나씩 읽어 배열에 저장
    while (scanf("%c", &ch) != EOF && ch != '\n') {
        s[i++] = ch;
    }
    s[i] = '\0'; // 문자열 종료한다.

    // 단어 수 세기
    for (int j = 0; s[j] != '\0'; j++) {
        // 현재 문자가 공백이 아니고 이전 문자가 공백이거나 j == 0 (문자열의 시작)
        if (s[j] != ' ' && (j == 0 || s[j - 1] == ' ')) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
