#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x[3];
    int y[3];
    int fourth_x;
    int fourth_y;

    for(int i = 0; i < 3; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    //x좌표 중에서 두 번 나온 값을 제외하고 나머지를 네 번째 점 x좌표로 결정한다.
    if(x[0] == x[1]) {
        fourth_x = x[2];
    }
    else if(x[0] == x[2]) {
        fourth_x = x[1];
    }
    else {
        fourth_x = x[0];
    }

    //y좌표도 같은 방식으로 처리한다.
    if(y[0] == y[1]) {
        fourth_y = y[2];
    }
    else if(y[0] == y[2]) {
        fourth_y = y[1];
    }
    else {
        fourth_y = y[0];
    }
    printf("%d %d\n", fourth_x, fourth_y);
    return 0;
}