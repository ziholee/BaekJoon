#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N;
    int square = 0;
    int dot = 0;
    int n = 1;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        n *= 2;
    }
    
    dot = n + 1;
    square = dot * dot;
    
    printf("%d\n", square);
   
        
    return 0;
}