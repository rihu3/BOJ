#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        int num;
        scanf("%d",&num);
        sum += num * num;
    }
    int result = sum % 10;
    printf("%d",result);
}