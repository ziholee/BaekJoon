#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long int S; //서로 다른 자연수 N개의 합.
    long long int N = 0; //서로 다른 자연수의 갯수.
    long long int sum = 0;

    scanf("%lld", &S);
    //합(sum)이 입력 값(S)를 넘지 않을 때까지 더한다.
    while(sum <= S) {
        N++;
        sum = sum + N;
    }
    printf("%lld", N - 1); //초과한 갯수 제외. N - 1.
    return 0;
}