#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char str[50][51];
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        scanf("%s", str[i]);
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < strlen(str[0]); j++) {
            if(str[0][j] != str[i][j]) {
                str[0][j] = '?';
            }
        }
    }
    printf("%s", str[0]);
    return 0;
}