#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N; //사람 수
    int C; //주 수 (몇 번 복권 진행할지)
    int J; //복권 당첨 상금
    scanf("%d", &N);

    double total = 0; //전체 금액 합
    double account; //강호의 금액 (첫 번째 입력값)

    //금액 입력 받기
    for (int i = 0; i < N; i++) {
        double b;
        scanf("%lf", &b);

        if (i == 0) account = b; //첫 번째는 강호의 잔고
        total += b;
    }

    scanf("%d", &J);
    scanf("%d", &C);

    // C주 동안 반복
    for (int i = 0; i < C; i++) {
        double chance = account / total; //이번 주 당첨 확률
        account += chance * J; // 기대값 만큼 돈 증가한다.
        total += J; // 전체 금액도 상금만큼 증가한다.
    }

    printf("%.10f\n", account);
    return 0;
}