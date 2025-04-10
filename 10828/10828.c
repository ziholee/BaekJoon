#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[10000];       // 스택을 저장할 배열
int top = -1;           // 스택의 가장 위를 가리키는 인덱스 (비어있으면 -1)


// 스택에 값을 넣는 함수
void push(int x) {
    stack[++top] = x;   // top을 1 증가시키고, 해당 위치에 x 저장
}


// 스택에서 값을 꺼내는 함수
int pop() {
    if (top == -1) return -1;   // 비어있으면 -1 반환
    return stack[top--];        // top 위치의 값을 반환하고, top을 1 감소시킴
}


// 스택에 들어있는 데이터 개수를 반환하는 함수
int size() {
    return top + 1;     // top이 0이면 1개 들어있으므로, 항상 top+1
}


// 스택이 비어있는지 확인하는 함수
int empty() {
    return (top == -1) ? 1 : 0; // 비어있으면 1, 아니면 0
}


// 스택의 맨 위 값을 반환하는 함수 (삭제 X)
int topValue() {
    if (top == -1) return -1;   // 비어있으면 -1
    return stack[top];         // top 위치의 값 반환
}


int main() {
    int n;              // 명령어의 수
    scanf("%d", &n);    // 명령어 개수 입력 받기
    
    char command[10];   // 명령어 문자열 저장할 배열
    int x;              // push 명령어에서 사용할 값

    for (int i = 0; i < n; i++) {
        scanf("%s", command);   // 명령어 입력 받기

        if (strcmp(command, "push") == 0) {   // push 명령어라면
            scanf("%d", &x);   // 값을 하나 더 입력받고
            push(x);           // push 실행
        } else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop());       // pop 실행 후 출력
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size());      // size 출력
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty());     // empty 여부 출력
        } else if (strcmp(command, "top") == 0) {
            printf("%d\n", topValue());  // top 값 출력
        }
    }

    return 0;
}
