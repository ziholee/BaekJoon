#include <stdio.h>
#include <string.h>

int main(){
    char str [1000000]; //단어의 길이 1,000,000
    int arr[26]; //a~z
    int max = 0;
    char s = '?';
    
    scanf("%s", str);
    int len = strlen(str);
    //알파벳 빈도 계산
    for(int i = 0; i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32; //소문자를 대문자로 변환한다. 
            //32인 이유는 아스키코드 'a' - 32 = 'A', 'b' - 32 = 'B' ...로 소문자와 대문자의 차가 32 만큼이기 때문이다.
        }
        arr[str[i] - 'A']++;
    }

    //최다 빈도 문자 계산
    for(int i = 0; i < 26; i++){
        if(arr[i] > max) {
            max = arr[i]; //최다 빈도 횟수를 찾는다.
            s = 'A' + i;
        } else if(arr[i] == max){
            s = '?'; //최다 빈도 문자 수가 같을 경우
        }
    }

    printf("%c\n", s);
    return 0;
}