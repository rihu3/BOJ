#include <stdio.h>

int main()
{
    long long N, M;
    scanf("%lld %lld",&N ,&M);
    long long dif = N-M;
    if(dif < 0) dif *= -1;
    
    printf("%lld",dif);
    
    
    return 0;
}