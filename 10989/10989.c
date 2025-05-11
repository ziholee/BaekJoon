#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N; // N개의 수를 입력 받는다.
    int num;
    int arr[10001] = {0,}; // 입력 가능한 수의 범위가 10,000 이하이므로 10001 크기의 배열 선언한다.
    
    scanf("%d", &N);
    
    // 입력받은 수의 개수를 카운트한다.
    for(int i = 0; i < N; i++) {
        scanf("%d", &num);
        arr[num]++;
    }
    
    // 카운팅된 수를 순서대로 출력한다.
    for(int i = 1; i <= 10000; i++) {
        for(int j = 0; j < arr[i]; j++) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}