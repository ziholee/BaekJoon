#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int C;
    int T;
    int Quarter, Dime, Nickel, Penny;
    
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d", &C);
        if(C >= 1 && C <= 500) {
            Quarter = C/25; //$0.25
            Dime = C%25/10; //$0.10
            Nickel = C%25%10/5; //$0.05
            Penny = C%25%10%5/1; //$0.01
            printf("%d %d %d %d\n", Quarter, Dime, Nickel, Penny);
        }
        else {
            break;
        }
    }
    return 0;
}