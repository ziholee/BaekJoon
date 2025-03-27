#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n; //횟수를 가리키는 변수.
    int result = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        result = n/2;
    }
    printf("%d\n", n);
    printf("%d\n", result);
    return 0;
}