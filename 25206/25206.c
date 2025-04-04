#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char course[51]; // 교과목 이름
    char grade[3];   // 등급
    float credit;    // 학점
    float score;     // 등급 점수
    float major_score = 0.0; //전공평점 = 학점 x 과목평점
    float sum_credit = 0.0;

    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s", course, &credit, grade);

        if (strcmp(grade, "P") == 0) {
            continue;
        }

        if (strcmp(grade, "A+") == 0) {
            score = 4.5;
        }
        else if (strcmp(grade, "A0") == 0) {
            score = 4.0;
        }
        else if (strcmp(grade, "B+") == 0) {
            score = 3.5;
        }
        else if (strcmp(grade, "B0") == 0) {
            score = 3.0;
        }
        else if (strcmp(grade, "C+") == 0) {
            score = 2.5;
        }
        else if (strcmp(grade, "C0") == 0) {
            score = 2.0;
        }
        else if (strcmp(grade, "D+") == 0) {
            score = 1.5;
        }
        else if (strcmp(grade, "D0") == 0) {
            score = 1.0;
        }
        else if (strcmp(grade, "F") == 0) {
            score = 0.0;
        }

        major_score += credit * score;
        sum_credit += credit;
    }

    if (sum_credit > 0) {
        printf("%.6f\n", major_score / sum_credit);
    }
    else {
        printf("0.000000\n");
    }

    return 0;
}