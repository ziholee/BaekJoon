#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int T; //테스트 케이스의 개수
    int a, b; //정수 a, b
    int total_data = 1;

    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        int last_comp = 1;

        for(int j = 0; j < b; j++){
            last_comp = (last_comp * a) % 10;
        }

        if(last_comp == 0) {
            last_comp = 10;
        }

        printf("%d\n", last_comp);
    }
    return 0;
}