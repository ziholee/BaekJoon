#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int X = 0; //총 금액
    int N = 0; //구매한 물건의 종류의 수
    int a, b;
    int count = 0;

    scanf("%d", &X);
    scanf("%d", &N);

    for(int i =0; i < N; i++){
        scanf("%d %d", &a, &b);
        count = a*b + count;
    }
    if(X != count) {
        printf("No");
    }
    else {
        printf("Yes");
    }
}