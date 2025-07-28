#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num[9] = {0,};
    int max = 0; //최댓값
    int max_num = 0; //최댓값의 순서

    for(int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
        
        if(num[i] > max) {
            max = num[i];
            max_num = i + 1; //배열이 0부터 시작이라 순서를 맞추기 위해서 +1을 한다.
        }
    }
    printf("%d\n", max);
    printf("%d\n", max_num);
    return 0;
}