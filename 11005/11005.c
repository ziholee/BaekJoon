#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    int B;
    int N;
    char sum[100];
    int a;

    scanf("%d %d", &N, &B); //10진법 수 N, B진법
    int i = 0; //인덱스 값

    if(N == 0) { //N이 0일 때, 예외처리
        printf("0\n");
        return 0;
    }

    while(N > 0){
        if(N % B < 10) {
            sum[i] = N % B + '0'; //나머지가 10 이하면 숫자
        }
        else {
            sum[i] = N % B + 'A' - 10; //나머지가 10 이상이면 'A'~'Z'문자로 변환한다.
        }
        N /= B; //N을 B로 나눈 몫을 저장한다.
        i++;
    }

    for(int j = i - 1; j >= 0; j--){
        printf("%c", sum[j]);
    }
    return 0;
}