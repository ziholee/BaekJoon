#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int data;
    int result = 0;
    int remain[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &data);
        remain[i] = (data % 42);
    }
    
    for(int i = 0; i < 10; i++) {
        int counter = 0; //0으로 초기화한다.
        for(int j = i+1; j < 10; j++) { // 서로 같은 수일 경우
            if(remain[i] == remain[j]) {
                counter++;
            }
        }
        if (counter == 0) {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}