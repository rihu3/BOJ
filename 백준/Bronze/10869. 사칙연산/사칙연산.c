#include <stdio.h>

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int plus,minus,multi,div,mod;
    plus = A + B;
    minus = A - B;
    multi = A * B;
    div = A / B;
    mod = A % B;
    
    printf("%d\n%d\n%d\n%d\n%d",plus,minus,multi,div,mod);
    return 0;
}