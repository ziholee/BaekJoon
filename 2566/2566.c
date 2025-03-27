#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int nums[9][9];
    int raw = 1;
    int column = 1;
    int data;
    int max = 0;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            scanf("%d", &nums[i][j]);
            data = nums[i][j];
            if(data > max){
                max = data;
                raw = i + 1;
                column = j + 1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d\n", raw, column);
    return 0;
}