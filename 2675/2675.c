#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int T; //테스트 케이스 수
	int R; //반복 횟수
	char S[21]; //20글자를 넘지 않는다. (null포함)
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++) {
		scanf("%d %s", &R, S);
		
		for(int j=0; j < strlen(S); j++) {
			for(int k=0; k<R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
