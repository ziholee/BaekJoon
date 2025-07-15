#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    int M;
    int ball[101]; //1부터 100번까지 공백포함
    int temp; //순서를 바꿔줄 임시 변수다.
    int i, j;

    scanf("%d %d", &N, &M);

    for(int k = 1; k <= N; k++) {
        ball[k] = k; //1번부터 N번까지 초기화한다.
    }
    //M번 바꾼다.
    for(int l = 1; l <= M; l++) {
        scanf("%d %d", &i, &j);
        temp = ball[i];
        ball[i] = ball[j];
        ball[j] = temp;
    }

    for(int b = 1; b <= N; b++) {
        printf("%d ", ball[b]);
    }
    return 0;
}