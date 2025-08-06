#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    long n;

    scanf("%ld", &n);

    printf("%ld\n", 4 * n); //정사각형 n개의 둘레의 총합은 4n이다.
    return 0;
}