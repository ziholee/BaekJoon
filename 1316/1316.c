#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
    char str [101];
    int len = strlen(str);
    int N, check;
    int count = 0;

    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%s", &str);
        check = 1;
        for(int j = 0; j < len; j++){
            for(int k = 0; k < j; k++){
                if(str[j] == str[k] && str[j] != str[j-1]){
                    check = 0;
                    break;
                }
            }
            if(check == 0){
                break;
            }
        }
        if(check == 1){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}