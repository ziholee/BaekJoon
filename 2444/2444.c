#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n); 
// 윗부분 출력
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n - i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
// 아랫부분 출력
    for(int i = n - 1; i > 0; i--) {
        for(int j = 0; j < n - i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}