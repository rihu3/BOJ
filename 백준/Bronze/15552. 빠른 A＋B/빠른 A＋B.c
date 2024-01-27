#include <stdio.h>

int main()
{
    int M;
    scanf("%d", &M);
    int A, B;
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    return 0;
}