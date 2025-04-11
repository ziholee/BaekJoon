#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int N; //응시하는 학생 수
    int k; //상을 받는 학생 수
    int x[10000] = {0,}; //학생 점수

    scanf("%d %d", &N, &k);

    for(int i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }

    // 버블 정렬, 내림차순으로 정렬한다.
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (x[j] < x[j + 1]) { 
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    printf("%d\n", x[k - 1]); // k번째로 큰 수는 인덱스 k-1

    return 0;
}