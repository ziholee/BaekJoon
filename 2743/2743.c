#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char data[101];
    scanf("%s", data);

    printf("%d", strlen(data));
    return 0;
}