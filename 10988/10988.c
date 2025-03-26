#include <stdio.h>
#include <string.h>

int main(){
    char str[100]; //문자열의 크기를 100으로 설정한다.
    int p = 1;

    scanf("%s", str); //문자열을 입력받아 str에 저장한다.

    int lenght = strlen(str); //입력받은 문자열 str의 길이
    for(int i = 0; i < lenght / 2; i++){ //대칭으로 비교하므로 길이 / 2
        if(str[i] != str[lenght-i-1]){ //i번째와 길이-i-1번째와 서로 대칭
            p = 0;
        }
    }
    printf("%d", p);
}