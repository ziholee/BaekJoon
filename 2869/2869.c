#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int A;
    int B;
    int V;
    int sum_day = 0; //총 걸리는 날
    
    scanf("%d %d %d", &A, &B, &V);
    sum_day = (V - B - 1) / (A - B) + 1;
    
    printf("%d", sum_day);
    return 0;
}