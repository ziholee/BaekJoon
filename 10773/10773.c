#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int K;
    int stack[100000];  //스택을 저장할 배열이다.
    int top = 0;         //스택의 top 위치를 가리키는 인덱스다.
    scanf("%d", &K);

    for (int i = 0; i < K; i++) {
        int num;
        scanf("%d", &num);

        if(num == 0) {
            // 0이 입력되면 가장 최근에 추가된 값 제거한다.
            if(top > 0) {
                top--;
            }
        } 
        else {
            //0이 아니면 스택에 추가한다.
            stack[top++] = num;
        }
    }
    
    //스택에 남은 모든 값의 합을 계산한다.
    int sum = 0;
    for(int i = 0; i < top; i++) {
        sum += stack[i];
    }
    
    printf("%d", sum);
    return 0;
}