#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// qsort에 사용할 비교 함수
int compare(const void *a, const void *b) {
    const char *str_a = (const char *)a;
    const char *str_b = (const char *)b;

    int len_a = strlen(str_a);
    int len_b = strlen(str_b);

    //길이가 다르면 길이 순으로 정렬한다.
    if(len_a != len_b) {
        return len_a - len_b;
    }
    //길이가 같으면 사전 순으로 정렬한다.
    else {
        return strcmp(str_a, str_b);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    char words[n][51]; //2차원 배열로 단어들을 저장한다.

    for(int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    //qsort를 사용하여 배열을 정렬한다.
    qsort(words, n, sizeof(words[0]), compare);

    //첫 번째 단어는 바로 출력한다.
    if(n > 0) {
        printf("%s\n", words[0]);
    }

    //중복을 제거하며 나머지 단어들을 출력한다.
    for(int i = 1; i < n; i++) {
        if(strcmp(words[i], words[i-1]) != 0) {
            printf("%s\n", words[i]);
        }
    }
    return 0;
}