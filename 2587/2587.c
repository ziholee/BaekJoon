#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    // 입력 받기 + 합계 계산
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // 버블 정렬 (오름차순)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 스왑
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 평균 출력
    printf("%d\n", sum / 5);

    // 중앙값 출력 (정렬된 배열의 가운데 값)
    printf("%d\n", arr[2]);

    return 0;
}