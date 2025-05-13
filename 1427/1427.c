#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char N[11];  // N은 1,000,000,000보다 작거나 같은 자연수다.
    int counter[10] = {0};  // 0부터 9까지 숫자 빈도수 저장한다.

    scanf("%s", N); //N을 입력받는다.
    // 각 자리 숫자를 정수로 변환하여 등장 횟수를 카운트한다.
    for (int i = 0; N[i] != '\0'; i++) {
        counter[N[i] - '0']++;
    }
    //역순으로 출력한다. 내림차순으로 정렬하기 위해서.
    for (int i = 9; i >= 0; i--) {
        while (counter[i]--) {
            printf("%d", i);
        }
    }
    return 0;
}
