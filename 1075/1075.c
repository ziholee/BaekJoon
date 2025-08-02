#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N;
    int F;
    int result;

    // N: 입력 수, F: 나누어떨어져야 할 수
    scanf("%d", &N);
    scanf("%d", &F);

    // 뒷 두 자리를 00으로 만든 수
    N = N - (N % 100);

    //00부터 99까지
    for(int i = 0; i < 100; i++) {
        if((N + i) % F == 0) {
            result = i;
            break;
        }
    }

    //결과를 두 자리로 출력 (ex: 01처럼 앞에 0이 있어야 하므로)
    printf("%02d\n", result);
    return 0;
}