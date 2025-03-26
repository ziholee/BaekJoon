#include <stdio.h>

int main()
{
    //킹, 퀸, 룩, 비숍, 나이트, 폰으로 그룹을 나누면 6개의 그룹이 나온다.
    int chess[6] = {1, 1, 2, 2, 2, 8}; //체스는 총 16개의 피스를 사용한다.
    int white[6]; //6개의 값을 받을 화이트 체스 배열
    int black[6]; //6개의 값을 출력할 블랙 체스 배열

    for(int i = 0; i < 6; i++){
        scanf("%d", &white[i]); //6개의 값을 입력 받는다.
    }

    for(int j = 0; j < 6; j++){
        black[j] = chess[j] - white[j]; //입력 받은 값을 원래 있던 체스의 수 만큼 뺀다.
        printf("%d ", black[j]); //블랙 체스의 값을 출력한다.
    }
    return 0;
}