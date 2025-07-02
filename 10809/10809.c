#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char S[100]; //문자열의 최대 길이는 100이다.
    int alphabet[26]; //알파벳의 갯수는 26개다.

    for(int i = 0; i < 26; i++) {
        alphabet[i] = -1; //-1로 모두 초기화 한다.
    }

    scanf("%s", S);

    for(int j = 0; j < strlen(S); j++) {
        int i = S[j] - 'a'; //'a'를 0으로, 'b'를 1로, ..., 'z'를 25로 변환한다.
        if(alphabet[i] == -1) {
            alphabet[i] = j; //처음으로 등장한 위치만 저장한다.
        }
    }

    for(int k = 0; k < 26; k++) {
        printf("%d ", alphabet[k]);
    }
    return 0;
}