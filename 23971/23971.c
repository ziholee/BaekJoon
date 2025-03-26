#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int H, W, N, M;
    scanf("%d %d %d %d", &H, &W, &N, &M);

    int i = (W - 1) / (M + 1) + 1; //행 
    int j = (H - 1) / (N + 1) + 1; //열

    printf("%d\n", i * j);
    return 0;
}