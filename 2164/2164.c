#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int queue[1000000];  //큐를 저장할 배열
    int head = 0;         //큐의 앞쪽 인덱스
    int tail = 0;         //큐의 뒤쪽 인덱스

    //1부터 N까지의 카드를 큐에 넣는다.
    for(int i = 1; i <= N; i++) {
        queue[tail++] = i;
    }
    
    //카드가 한 장 남을 때까지 반복한다.    
    while(tail - head > 1) {
        head++;                          //맨 위 카드를 버린다. 
        queue[tail++] = queue[head++];   //다음 카드를 맨 뒤로 이동한다.
    }

    printf("%d\n", queue[head]);
    return 0;
}
