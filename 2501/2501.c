#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, K;
    int count = 0;

    scanf("%d %d", &N, &K);

    //N은 1 이상 10,000 이하이다. K는 1 이상 N 이하이다.
    if (1 <= N && N <= 10000 && 1 <= K && K <= N) {
        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                count++;
                if (count == K) {
                    printf("%d\n", i); // K번째 약수 출력
                    return 0;
                }
            }
        }
        printf("0\n"); //약수의 개수가 K보다 작을 경우
    }
    return 0;
}
