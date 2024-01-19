#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    int ary[42][2];
    ary[0][0] = 1;
    ary[0][1] = 0;
    ary[1][0] = 0;
    ary[1][1] = 1;

    for (int idx = 2; idx <= 40; idx++)
    {
        ary[idx][0] = ary[idx - 1][1];
        ary[idx][1] = ary[idx - 1][0] + ary[idx - 1][1];
    }

    for (int i = 0; i < T; i++)
    {
        int num;
        scanf("%d", &num);
        printf("%d %d\n", ary[num][0], ary[num][1]);
    }

    return 0;
}