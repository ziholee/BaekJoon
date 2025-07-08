#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int data;
    int remain[42] = {0};
    int result = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &data);
        remain[data % 42] = 1; // 나머지에 해당하는 인덱스에 표시
    }
    for (int i = 0; i < 42; i++) {
        if (remain[i]) {
            result++; // 사용된 나머지 개수 세기
        }
    }
    printf("%d\n", result);
    return 0;
}
