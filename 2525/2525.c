#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int hour;
    int min;
    int end = 0; //요리 종료 시간이다.

    scanf("%d %d", &hour, &min);
    scanf("%d", &end);

    min = min + end;

    if(min >= 60) {
        hour = hour + (min/60);
        min = min % 60;
    }
    if(hour >= 24) {
        hour = hour%24;
    }
    printf("%d %d", hour, min);
    return 0;
}

  