#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N; //과목 수
    double scores[1000]; //점수
    double max = 0.0; //점수 중 가장 큰 값
    double sum = 0.0; //합
    double average = 0.0; //평균

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i]; //최대 값을 찾는다.
        }
    }

    for (int i = 0; i < N; i++) {
        scores[i] = (scores[i] / max) * 100.0; //점수를 최댓값 기준으로 조작한다.
        sum += scores[i];
    }
    average = sum / N;
    printf("%lf\n", average);
    return 0;
}