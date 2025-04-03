#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int room = 1; // 최소 개수의 방
    int i = 1; // 각 둘레마다 마지막 방의 번호 ex) 1, 2~7, 8 ~ 19 ...

    while (i < N) {
        i += 6 * room; // 각 원마다 6배의 방이 존재
        room++; // 방 증가
    }

    printf("%d\n", room);
    return 0;
}