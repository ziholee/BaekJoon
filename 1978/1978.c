#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int data;
    int count = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &data); //N번 data를 입력받는다.
        //1은 소수가 아니므로 제외한다.
        for(int j = 2; j <= data; j++) {
            if(data == j) { //data가 j와 같으면 1과 자기 자신만 약수며 소수 조건에 부합된다.
                count++;
            }
            if(data % j == 0) { //data가 j로 나누어 떨어지면 약수가 존재하므로 종료한다.
                break;
            } 
        }
    }
    printf("%d\n", count);
    return 0;
}