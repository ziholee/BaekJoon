#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int X;
    int Y;
    int Max_X = -10000, Max_Y = -10000;
    int Min_X = 10000, Min_Y = 10000;

    for(int i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);

        if(X < Min_X) {
            Min_X = X;
        }
        if(X > Max_X) {
            Max_X = X;
        }
        if(Y < Min_Y) {
            Min_Y = Y;
        }
        if(Y > Max_Y) {
            Max_Y = Y;
        }
    }

    int width = Max_X - Min_X;
    int height = Max_Y - Min_Y;
    int square = width * height;

    printf("%d", square);

    return 0;
}