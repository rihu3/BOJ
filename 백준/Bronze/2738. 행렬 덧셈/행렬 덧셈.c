#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[100][100];
    int B[100][100];
    for(int i = 0; i<N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for (int m = 0; m < N; m++)
    {
        for (int k = 0; k < M; k++)
        {
            scanf("%d", &B[m][k]);
        }
    }

    for (int z = 0; z < N; z++)
    {
        for (int y = 0; y < M; y++)
        {
            printf("%d ", A[z][y] + B[z][y]);
        }
        printf("\n");
    }
    return 0; 
}