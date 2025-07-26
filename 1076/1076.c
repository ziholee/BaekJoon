#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //저항 색상에 대응하는 값들을 인덱스로 저장한 배열이다.
    //colors[0] = "black", colors[1] = "brown", ..., colors[9] = "white"
    char colors[10][10] = {
        "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", 
        "grey", "white"
    };

    char c1[10], c2[10], c3[10]; //사용자 입력을 저장할 문자열 변수 (최대 길이 9 + 1)
    int i, value1 = -1, value2 = -1, multiplier = -1; //반복문과 값 저장용 변수들

    scanf("%s %s %s", c1, c2, c3); //사용자로부터 색상 3개 입력 받는다.

    //첫 번째 색상의 값을 찾는다.
    for(i = 0; i < 10; i++) {
        int j = 0;
        //colors[i]와 c1이 같은지 문자 하나씩 비교한다.
        while (colors[i][j] == c1[j] && colors[i][j] != '\0') {
            j++;
        }
        //두 문자열의 끝까지 같았다면 같은 색상이다.
        if (colors[i][j] == '\0' && c1[j] == '\0') {
            value1 = i; //i번째가 해당 색상
            break;
        }
    }
    //두 번째 색상의 값을 찾는다.
    for(i = 0; i < 10; i++) {
        int j = 0;
        while (colors[i][j] == c2[j] && colors[i][j] != '\0') {
            j++;
        }
        if (colors[i][j] == '\0' && c2[j] == '\0') {
            value2 = i;
            break;
        }
    }

    //세 번째 색상 (곱할 값) 찾는다.
    for(i = 0; i < 10; i++) {
        int j = 0;
        while (colors[i][j] == c3[j] && colors[i][j] != '\0') {
            j++;
        }
        if (colors[i][j] == '\0' && c3[j] == '\0') {
            multiplier = i;
            break;
        }
    }

    //최종 저항 값 계산한다.
    //(value1 * 10 + value2) × (10 ^ multiplier)
    long long result = (value1 * 10 + value2);
    for(i = 0; i < multiplier; i++) {
        result *= 10;
    }

    printf("%lld\n", result);
    return 0;
}
