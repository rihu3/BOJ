#include <stdio.h>

int main()
{
    char a[1000];
    int i;
    scanf("%s", a);
    scanf("%d", &i);
    printf("%c",a[i-1]);
}