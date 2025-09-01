#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int low_num = 100; //주어진 자연수는 100보다 작으므로 초기 값을 100으로 뒀다.
    
    for(int i = 0; i < 7; i++) {
        scanf("%d", &number);
        //홀수를 찾기 위한 조건.
        if(number % 2 != 0) {
            sum += number;
            if(number < low_num) {
                low_num = number;
            }
        }
    }
    //만약 홀수가 없다면 합은 초기 값인 0이므로 -1을 출력한다. 조건이 부합된다면 합과 최솟값을 출력한다.
    if(sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n", sum);
        printf("%d", low_num);
    }
    return 0;
}