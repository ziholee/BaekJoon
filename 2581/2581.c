#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int M, n;
    int count = 0;
    int min = 0;
    int result = 0;

    scanf("%d %d", &M, &n);

    for(int i = M; i <= n; i++){ //자연수 M은 n보다 작거나 같고 M부터 n까지 더해야 하므로 for문을 이용한다.
        count = 0;
        if(i == 1) { 
            continue; // 1은 소수가 아니다. 그러므로 건너뛴다.
        }

        for(int j = 2; j < i; j++) {
            if(i % j == 0) { //나누어 떨어지면 소수가 아니다.
                count = 1; 
                break;
            }
        }

        if(count == 0) {
            if(min == 0) {
                min = i; //첫번째 숫자가 소수다.
            }
            result = result + i; //소수의 합을 구한다.
        }
    }
    if(result != 0) {
        printf("%d\n%d", result, min);
    } else {
        printf("-1"); //없다면 -1을 출력한다.
    }
    
    return 0;
}