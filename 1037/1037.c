#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int count;
    int num, min, max;
	int divisor[50];
	
	scanf("%d", &count);
	for (int i = 0; i < count; i++){
		scanf("%d", &divisor[i]);	//약수들 입력받기
	}
	
	min = divisor[0];
	max = divisor[0];
	for (int i = 0; i < count; i++){
		if (divisor[i] < min) min = divisor[i];
		if (divisor[i] > max) max = divisor[i];
	}
	num = min * max;	//가장 작은 약수와 가장 큰 약수를 곱한다.
	
	printf("%d", num);
	return 0;
}