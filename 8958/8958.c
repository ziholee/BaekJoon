#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int T; //테스트 케이스 개수.
    char quiz[81]; //OX 문자열을 저장한다. 공백포함 81.
    int score; //현재 연속 'O' 점수.
    int sum; //총 점수 합계.

    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%s", quiz);
        score = 0;
        sum = 0;
        //문자열 끝까지 탐색한다.
        for (int j = 0; quiz[j] != '\0'; j++) {
            if(quiz[j] == 'O') {
                score++;      //연속 O이면 점수 1 증가한다.
                sum += score; //총합에 현재 점수 추가한다.
            } else {
                score = 0;    //X면연속 점수 초기화한다.
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
