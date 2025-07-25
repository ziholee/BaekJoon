#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int M;
    int card[100];

    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++) {
        scanf("%d", &card[i]);
    }

    int max = 0;
    // 3장의 카드를 고르는 모든 경우다.
    for(int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = card[i] + card[j] + card[k];
                if (sum <= M && sum > max) {
                    max = sum;
                }
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
