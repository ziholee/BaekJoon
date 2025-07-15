#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int angle[3];

    for(int i = 0; i < 3; i++) {
        scanf("%d", &angle[i]);
    }
    //입력받은 세각이 180이어야 삼각형이 성립된다.
    if(angle[0] + angle[1] + angle[2] == 180) {
        if(angle[0] == 60 && angle[1] == 60 && angle[2] == 60) {
            printf("Equilateral\n"); //정사각형일 경우
        }
        else if(angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2]) {
            printf("Isosceles\n"); //이등변 삼각형일 경우.
        }
        else {
            printf("Scalene\n"); //그냥 삼각형일 경우.
        }
    }
    else {
        printf("Error\n"); //삼각형 성립이 되지 않을 경우.
    
    }
    return 0;
}
