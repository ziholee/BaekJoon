#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N; //배열의 크기.
    int K; //찾고자 하는 swap 횟수.
    scanf("%d %d", &N, &K);

    int A[N]; //입력 배열.

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int swapCount = 0; //swap 발생 횟수 카운트한다.

    for (int i = N - 1; i > 0; i--) {
        int maxIndex = 0; //i까지 중 가장 큰 값의 인덱스 찾기 위한 변수다.
        //0부터 i까지 중 최대값을 가진 인덱스를 찾는다.
        for (int j = 1; j <= i; j++) {
            if (A[j] > A[maxIndex]) {
                maxIndex = j;
            }
        }
        //최대값의 위치가 현재 위치(i)가 아니라면 swap한다.
        if (maxIndex != i) {
            int temp = A[i];
            A[i] = A[maxIndex];
            A[maxIndex] = temp;

            swapCount++;
            //K번째 swap일 경우 그 값을 출력한다.
            if (swapCount == K) {
                //오름차순 정렬이므로 큰 값이 뒤로 가기 때문에 A[maxIndex]와 A[i]를 swap한다.
                printf("%d %d\n", A[maxIndex], A[i]);
                return 0;
            }
        }
    }
    printf("-1\n"); //만약 swap 횟수가 K보다 작다면 -1을 출력한다.
    return 0;
}