#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int T; //테스트 케이스 수.

    scanf("%d", &T);

    while(T--) {
        char str[51]; //괄호 문자열 최대 길이 50, 공백포함 51.

        scanf("%s", str);

        int count = 0; //'(', ')' 일때 count한다.
        int VPS = 1;   //올바른 괄호 문자열인지 여부를 나타낸다. (기본값: YES)

        for(int i = 0; i < strlen(str); i++) {
            if(str[i] == '(') {
                count++; //여는 괄호일때 증가시킨다.
            }
            else {
                count--; //닫는 괄호일때 감소시킨다.
            }
            //닫는 괄호가 더 많아진 순간 → 잘못된 문자열
            if(count < 0) {
                VPS = 0; //NO
                break;
            }
        }
        //모든 문자를 읽고 나서 균형이 0이 아니면 잘못됨
        if(count != 0) {
            VPS = 0;
        }

        if(VPS) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}