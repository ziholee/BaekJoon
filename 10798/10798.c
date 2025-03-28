#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char data [5][15] = {0,}; 

    for(int i = 0; i < 5; i++){
        scanf("%s", data[i]);
    }

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(data[j][i] != '\0' && data[j][i] != '\n'){
                printf("%c", data[j][i]);
            }
        }
    }
    return 0;
}