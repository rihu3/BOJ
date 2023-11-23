#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int remain[42] = {0};
    int i;
    for(i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        remain[num % 42] = 1;
    }
    int cnt=0;
    int j;
    for(j=0; j < 42; j++)
    {
        if(remain[j] == 1) cnt++;
    }
    printf("%d", cnt);
    
    return 0;
}
