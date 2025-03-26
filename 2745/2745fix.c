#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    int B;
    char N[100];
    int sum = 0;

    scanf("%s %d", N, &B);
    int len = strlen(N);

    int n = 1;
    int a;

    for(int i = len - 1; i >= 0; i--){ //뒤에서부터 읽는다.
        if(N[i] >= '0' && N[i] <= '9') {
            a = N[i] - '0';
        }
        else {
            a = N[i] - 'A' + 10; 
            //아스키코드'Z' = 90, 'A' = 65이다. 이때 36진수 Z는 35이므로 Z - A + 10 = 35이다.
        }
        sum = sum + a * n; // 35 x B의 n거듭제곱 + 35 x B의 n거듭제곱 ... = sum, B = 36, 즉 36진수 
        n = n * B; // n = B의 거듭제곱, 36, 36*36 ...
    }
    printf("%d\n", sum);
    return 0;
}