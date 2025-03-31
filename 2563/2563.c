#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()  //100x100
{
    int n, x, y;
    int counter = 0; //0으로 초기화
    int data[100][100] = {0,}; //0으로 초기화

    scanf("%d", &n); //횟수를 입력 받는다.

    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y); //x, y를 입력 받는다.
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                data[j + x][k + y] = 1; //입력 받은 x, y좌표 10x10 영역을 1로 채운다.
            }
        }
    }

    //종이 넓이
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(data[i][j] == 1){
                counter++; //영역이 1인 곳을 모두 센다.
            }
        }
    }
    printf("%d", counter);
    return 0;
}