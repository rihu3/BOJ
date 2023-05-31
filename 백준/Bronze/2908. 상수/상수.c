#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    int a1,a2,a3,b1,b2,b3;
    a1 = a /100;
    a2 = (a%100)/10;
    a3 = (a%100)%10;
    
    b1 = b /100;
    b2 = (b%100)/10;
    b3 = (b%100)%10;
    
    a = a3*100 + a2 * 10 + a1;
    b = b3*100 + b2 * 10 + b1;
    
    if(a>b) printf("%d",a);
    else if(a<b) printf("%d",b);
    
    
    
    return 0;
}