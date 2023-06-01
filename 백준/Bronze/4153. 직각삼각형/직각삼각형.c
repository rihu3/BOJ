#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
            break;

        int a2 = a * a;
        int b2 = b * b;
        int c2 = c * c;

        if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2)
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
