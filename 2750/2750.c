#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int N;
    int a;
    int arr[1000] = { 0, };
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 1000; j++)
    {
        for (int k = 0; k < N - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                a = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = a;

            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }
}