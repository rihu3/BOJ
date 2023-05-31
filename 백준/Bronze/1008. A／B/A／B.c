#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    double div = ((double)a) / (double)(b);
    printf("%.9f",div);
    
    return 0;
}