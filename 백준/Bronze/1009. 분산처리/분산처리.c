#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int num = 1;
        for (int j = 0; j < b; j++)
        {
            num *= a;
            while (num >= 10)
            {
                num %= 10;
            }
        }
        if (num == 0)
            printf("%d\n", 10);
        else
            printf("%d\n", num);
    }
    return 0;
}
