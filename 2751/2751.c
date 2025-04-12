#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>     
#include <stdlib.h> 

// qsort에서 사용할 비교 함수 정의
// 오름차순 정렬을 위해 작은 수가 앞으로 오게 정렬 기준을 설정
int compare(const void *a, const void *b) {
    int num1 = *(int *)a;  // void 포인터를 int 포인터로 형변환 후 역참조
    int num2 = *(int *)b;

    if (num1 < num2) return -1;   // num1이 작으면 앞으로
    else if (num1 > num2) return 1; // num1이 크면 뒤로
    else return 0;               // 같으면 위치 바꾸지 않음
}

int main() {
    int N;  // 입력될 수의 개수를 저장할 변수

    scanf("%d", &N);  // 수의 개수 입력 받기 (1 <= N <= 1,000,000)

    // 입력받은 수들을 저장할 동적 배열 선언
    // malloc을 사용해 N개의 정수를 저장할 공간을 힙 메모리에 할당
    int *arr = (int *)malloc(sizeof(int) * N);

    // 메모리 할당 실패 시 오류 메시지 출력 후 종료
    if (arr == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }

    // N개의 수 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // arr[i]에 수 입력
    }

    // qsort 함수를 이용하여 배열을 오름차순 정렬
    // 인자: (정렬할 배열, 요소 개수, 요소 크기, 비교 함수)
    qsort(arr, N, sizeof(int), compare);

    // 정렬된 결과 출력
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);  // 한 줄에 하나씩 출력
    }

    // 사용한 메모리 해제 (동적 할당한 메모리는 반드시 free 해줘야 함)
    free(arr);

    return 0;  // 정상 종료
}