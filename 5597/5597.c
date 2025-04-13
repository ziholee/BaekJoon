#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int num;
    int n[30] = { 0, }; //30명의 학생 출석 체크 배열이다.

    for (int i = 1; i <= 28; i++) //28명의 학생이 제출한 출석번호 입력한다.
    {
        scanf("%d", &num);
        n[num - 1] = 1; //출석번호에 해당하는 인덱스 값을 1로 초기화
    }

    for (int j = 0; j < 30; j++) //30명의 학생 중 출석번호가 없는 학생 출력
    {
        if (n[j] == 0) //출석번호가 없는 학생 출력
        {
            printf("%d\n", j + 1); //출석번호가 없는 학생의 번호 출력
        }
    }
    return 0;
}