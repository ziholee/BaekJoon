#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//qsort 함수에 필요한 비교 함수
int compare(const void *a, const void *b) {
    //int 포인터를 역참조하여 값 비교한다.
    if(*(int *)a > *(int *)b) {
        return 1;
    } else if(*(int *)a < *(int *)b) {
        return -1;
    } else {
        return 0;
    }
}

//이분 탐색 함수
int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    //왼쪽 인덱스가 오른쪽 인덱스보다 작거나 같을 때까지 반복한다.
    while(left <= right) {
        int mid = (left + right) / 2;
        
        //중간값이 목표값과 같으면 찾았으므로 1 반환한다.
        if(arr[mid] == target) {
            return 1;
        } 
        //중간값이 목표값보다 작으면, 목표값은 오른쪽 절반에 있다.
        else if(arr[mid] < target) {
            left = mid + 1;
        } 
        //중간값이 목표값보다 크면, 목표값은 왼쪽 절반에 있다.
        else {
            right = mid - 1;
        }
    }
    
    //반복문이 끝날 때까지 찾지 못했으므로 0 반환한다.
    return 0;
}

int main() {
    int N, M;
    
    //N 입력 받기
    scanf("%d", &N);
    int *arr_N = (int *)malloc(sizeof(int) * N);
    
    //N개의 정수 입력 받기
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr_N[i]);
    }
    
    //qsort 함수를 이용해 배열 arr_N을 오름차순으로 정렬한다.
    qsort(arr_N, N, sizeof(int), compare);
    
    //M 입력 받기
    scanf("%d", &M);
    
    //M개의 정수에 대해 이분 탐색 수행
    for(int i = 0; i < M; i++) {
        int target;
        scanf("%d", &target);
        
        //이분 탐색 함수 호출 및 결과 출력한다.
        printf("%d\n", binary_search(arr_N, N, target));
    }
    
    //메모리 해제
    free(arr_N);
    
    return 0;
}