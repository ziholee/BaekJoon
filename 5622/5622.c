#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[16]; //단어의 길이 최대 15, 공백 포함 16.
    int counter = 0;

    scanf("%s", str);
    //ASCII코드에 따라서 A = 65부터 초를 카운트 하게 만든다. ex) A = 3sec.
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 65 && str[i] <= 67) {
            counter += 3;
        }
        if(str[i] >= 68 && str[i] <= 70) {
            counter += 4;
        }
        if(str[i] >= 71 && str[i] <= 73) {
            counter += 5;
        }
        if(str[i] >= 74 && str[i] <= 76) {
            counter += 6;
        }
        if(str[i] >= 77 && str[i] <= 79) {
            counter += 7;
        }
        if(str[i] >= 80 && str[i] <= 83) {
            counter += 8;
        }
        if(str[i] >= 84 && str[i] <= 86) {
            counter += 9;
        }
        if(str[i] >= 87 && str[i] <= 90) {
            counter += 10;
        }
    }
    printf("%d\n", counter);
    return 0;
}