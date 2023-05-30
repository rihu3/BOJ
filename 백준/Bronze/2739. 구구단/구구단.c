#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int i;
    for (i = 1; i <= 9; i++) {
        int op = N * i;
        printf("%d * %d = %d\n", N, i, op);
    }
    return 0;
}