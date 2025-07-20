#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int counter_Zero;
int counter_One;
//문제에서 주어진 피보나치 함수를 변형해서 사용했다. 
//기존의 printf로 출력하는 것을 카운터로 바꿔서 등장 횟수를 세도록 변경했다.
int fibonacci(int n) {
    if (n == 0) {
        counter_Zero++;
        return 0;
    } else if (n == 1) {
        counter_One++;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int TestCase;

    scanf("%d", &TestCase);

    for(int i = 0; i < TestCase; i++) {
        int num;

        scanf("%d", &num);

        counter_Zero = 0; //0을 세는 카운터 변수를 초기화한다.
        counter_One = 0; //1을 세는 카운터 변수를 초기화한다.

        fibonacci(num);

        printf("%d %d\n", &counter_Zero, &counter_One);
    }
    return 0;
}
    시간초과로 인하여 실패하였다.
*/

int main() {
    int TestCase;
    int num;
    int result[41] = {0, 1}; //공백포함 41, result[0] = 0, result[1] = 1

    scanf("%d", &TestCase);

    for(int i = 2; i < 41; i++) {
        result[i] = result[i - 1] + result[i - 2];
    }

    for(int j = 0; j < TestCase; j++) {
        scanf("%d", &num);

        if(num == 0) {
            printf("1 0\n"); //fibonacci(0)은 0이 1번 출력되고, 1은 출력이 안된다.
        }
        else {
            printf("%d %d\n", result[num - 1], result[num]);
        }
    }
    return 0;
}